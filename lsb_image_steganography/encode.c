#include <stdio.h>
#include "encode.h"
#include "types.h"
#include <string.h>
#include "common.h"

/* Function Definitions */

/* Get image size
 * Input: Image file ptr
 * Output: width * height * bytes per pixel (3 in our case)
 * Description: In BMP Image, width is stored in offset 18,
 * and height after that. size is 4 bytes
 */
uint get_image_size_for_bmp(FILE *fptr_image)
{
    uint width, height;
    // Seek to 18th byte
    fseek(fptr_image, 18, SEEK_SET);

    // Read the width (an int)
    fread(&width, sizeof(int), 1, fptr_image);
    printf("width = %u\n", width);

    // Read the height (an int)
    fread(&height, sizeof(int), 1, fptr_image);
    printf("height = %u\n", height);

    // Return image capacity
    return width * height * 3;
}

/* 
 * Get File pointers for i/p and o/p files
 * Inputs: Src Image file, Secret file and
 * Stego Image file
 * Output: FILE pointer for above files
 * Return Value: e_success or e_failure, on file errors
 */
Status open_files(EncodeInfo *encInfo)
{
    // Src Image file
    encInfo->fptr_src_image = fopen(encInfo->src_image_fname, "r");
    // Do Error handling
    if (encInfo->fptr_src_image == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->src_image_fname);

    	return e_failure;
    }

    // Secret file
    encInfo->fptr_secret = fopen(encInfo->secret_fname, "r");
    // Do Error handling
    if (encInfo->fptr_secret == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->secret_fname);

    	return e_failure;
    }

    // Stego Image file
    encInfo->fptr_stego_image = fopen(encInfo->stego_image_fname, "w");
    // Do Error handling
    if (encInfo->fptr_stego_image == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->stego_image_fname);

    	return e_failure;
    }

    // No failure return e_success
    return e_success;
}


/* function definition for read and validate arguments */
Status read_and_validate_encode_args(char *argv[], EncodeInfo *encInfo)
{
    if(argv[2] != NULL)
    {
	  if(strcmp(strstr(argv[2], "."), ".bmp") == 0)                                   		//compare a 3rd CLA (argv[2]) is .bmp file or not
	  {
	    encInfo->src_image_fname = argv[2];                                         		// argv[2]=.bmp file then store it in a structure element
	  }
	  else                                                                        
	  {
	    printf("Error: argv[2] is not .bmp file\n\tUsuage: Please pass argv[2] as .bmp file\n");    //if argv[2] != .bmp file then print error message
	    return e_failure;
	  }
    }
    else
    {
        printf("NOTE : Please pass the bmp file as the 3rd argument\n");
        return 1;
    }

	if(argv[3] != NULL)                            							//check whether 4th CLA(argv[3]) is not passed passed through CLA
	{
        if(strcmp(strstr(argv[3],"."),".txt") == 0)
        {
	      strcpy(encInfo->extn_secret_file, strstr(argv[3], "."));              //copy a secret file extension to structure member
	      encInfo->secret_fname = argv[3];                     					//store argv[3] to structure member to secrete file name
	    }
    	else
	     {
	      printf("Error: argv[3] is not txt file\n"); 						//print error message
         
	       return e_failure;
	     }
    }
    else
    {
        printf("NOTE : Please pass the txt file as the 4th argument\n");
        return 1;
    }
	
	if(argv[4] == NULL)                                                    				//check whether argv[4] output file is not passed through CLA
	{
        printf("INFO : Output file name is not passed ,so created stego.bmp as default\n"); 
		encInfo->stego_image_fname = "stego.bmp";                                      		//store output file to structure member stego image fname
    }
    else
	{
        if(strcmp(strstr(argv[4],"."),".bmp") == 0)
        {
	      encInfo->stego_image_fname = argv[4];
        }                                                                                //if argv[4] is passed through CLA then store that in structure member stego image fname 
	 }
	return e_success;
}

/* function definition to find the secret file size */
uint get_file_size(FILE *fptr)
{
    int size;
    fseek(fptr,0,SEEK_END);                                                           //to count the size of a file
    size=ftell(fptr);
    //printf("%d\n", size);
    return size;
}


Status check_capacity(EncodeInfo *encInfo)
{
    /* get the source image file size and store in structure member */
    encInfo->image_capacity = get_image_size_for_bmp(encInfo->fptr_src_image); 

    /* get the secret file size and store in structure member */
    encInfo->size_secret_file = get_file_size(encInfo->fptr_secret);          
    //printf("%d\n", encInfo->image_capacity);
    //printf("%d\n", encInfo->size_secret_file);
    
    /* checking whether the image file can fit the secret message for encoding */
    if(encInfo->image_capacity >  (strlen(MAGIC_STRING)*8) + (sizeof(int) * 8) + (strlen(encInfo->extn_secret_file)*8) + (4*8) + (encInfo->size_secret_file * 8))    
    {
	return e_success;
    }
    else
    {
	return e_failure;                                     //return failure if size is insufficient
    }
}

/* function definition to copy the image file (.bmp) header to the encoded image file*/ 
Status copy_bmp_header(FILE *fptr_src_image, FILE *fptr_dest_image)
{
    char buf[54];                                                      				//initialize a array to size of 54 bytes                   
    /* set the file pointer to the begining of the file */    
    fseek(fptr_src_image,0,SEEK_SET);                     

    /* read the 54 bytes from the source image file and store in array */    
    fread(&buf,1,54,fptr_src_image);  

    /* write the 54 bytes to the destination image(output setgo image) */    
    fwrite(&buf,1,54,fptr_dest_image);                               	
    return e_success;
}

/* function definition to encode the data to the stego image (output file) */
Status encode_data_to_image(char *data, int size,FILE *fptr_src_image, FILE *fptr_stego_image,EncodeInfo *encInfo)
{
    char arr[8];											              //initailization of array
    for(int i=0; i<size; i++)
    {
	fread(arr,1,8,fptr_src_image);                                       //read data from source file to a size of 8byte for a character
	encode_byte_to_lsb(data[i],arr);                                     //function call for character
	fwrite(arr,1,8,fptr_stego_image);                                    //write a data stored in array to a output file
    }
}

/* function definition to encode the byte to the lsb of the rgb data */
Status encode_byte_to_lsb(char data, char *image_buffer)
{
    for(int i=0; i<8; i++)                                         				//run a loop to 8 times to encode a 1byte character
    {
	image_buffer[i]=image_buffer[i] & 0XFE;                                     //clear the lsb bit                                                     
	image_buffer[i]=image_buffer[i] | ((data & 1<<i) >>i);						//encode a lsb data and store it in a array
    }
}

/* functon definition to encode secret file extension size */
Status encode_secret_file_extn_size(int size, FILE *fptr_src_image,FILE *fptr_stego_image)
{
    char buf[32];										
    fread(&buf,1,32,fptr_src_image);                                           //read data from source file and store it in a pointer
    encode_size_to_lsb(buf,size);                  						       //function call for integer 
    fwrite(&buf,1,32,fptr_stego_image);								          //write a data stored in a pointer to a output file
    return e_success;
}

/* function definition to encode size to lsb */
Status encode_size_to_lsb(char *image_buffer,int size)
{
    for(int i=0; i<32; i++)										               //run a loop till 32 times for integer
    {
	image_buffer[i] = image_buffer[i] & 0XFE;
	image_buffer[i] = image_buffer[i] | ((size & 1<<i) >> i);					//store a data in a array
    }
}

/*function definition to encode magic string */
Status encode_magic_string(char *str, EncodeInfo *encInfo)
{
    encode_data_to_image(str,strlen(MAGIC_STRING),encInfo->fptr_src_image,encInfo->fptr_stego_image,encInfo);	//function call to encode data of a file from a magic string file
    return e_success;
}

/* function definition to encode the secret file extension */
Status encode_secret_file_extn(char *file_extn,EncodeInfo *encInfo)
{
    encode_data_to_image(file_extn,strlen(file_extn),encInfo->fptr_src_image,encInfo->fptr_stego_image,encInfo);	//function call to encode data to image from a source file
    return e_success;
}

/* function definition to encode the secret file size */
Status encode_secret_file_size(long file_size, EncodeInfo *encInfo)
{
    char buf[file_size];
    fread(&buf,1,32,encInfo->fptr_src_image);						//read a content from source file and store it in a pointer
    encode_size_to_lsb(buf,file_size);							//function call to calculate size of a secrete file
    fwrite(&buf,1,32,encInfo->fptr_stego_image);					//write a stored data in pointer to a output file
    return e_success;
}

/* function definition to encode secret file data to image file */
Status encode_secret_file_data(EncodeInfo *encInfo)
{
    fseek(encInfo->fptr_secret,0,SEEK_SET);						//set cursor to the begining of a content to a data stored in a secrete file
    char buf[encInfo->size_secret_file];						//initialize a array of a size of secrete file size
    fread(&buf,1,encInfo->size_secret_file,encInfo->fptr_secret);			//read a content from a secrete file to a pointer
    fscanf(encInfo->fptr_secret,"%s",buf);						//scan a content stored in a pointer to secrete file
    encode_data_to_image(buf,encInfo->size_secret_file,encInfo->fptr_src_image,encInfo->fptr_stego_image,encInfo);																		       	//function call to encode a data from a secrete file to output file
    return e_success;
}

/* function defnition to copy the remaining data from the source to desination image */
Status copy_remaining_img_data(FILE *fptr_src, FILE *fptr_dest)
{
    char *buf;
    while(fread(&buf,1,1,fptr_src) > 0)							//read a remaining data from a source file till it comes to end
    fwrite(&buf,1,1,fptr_dest);								//write a data stored in pointer to a output file
    return e_success;
}




// Function defination for Encoding //
Status do_encoding(EncodeInfo *encInfo)
{
  if(open_files(encInfo) == e_success)							//check whether the files are opened successfully or not
  {
      printf("INFO : Open files is successful\n");

    if(check_capacity(encInfo) == e_success)					        //check whether image capacity greater to fit the message 
    {
      printf("INFO : Check capacity is successful\n");

     if(copy_bmp_header(encInfo->fptr_src_image,encInfo->fptr_stego_image) == e_success) 	//check whether the source file header data is copied successfully to output file
     {
      printf("INFO : Copying bmp header is successful\n");

      if(encode_magic_string(MAGIC_STRING,encInfo) == e_success)				//check whether the magic string content is encoded successfully or not 
       {
         printf("INFO : Encoding of magic string is successfull\n");

        if(encode_secret_file_extn_size(strlen(strstr(encInfo->secret_fname,".")),encInfo->fptr_src_image,encInfo->fptr_stego_image) == e_success) 																		//check whether size of secrete file extension is encoded successfully or not
         {
           printf("INFO : Encoding of size is successful\n");
                                        
          if(encode_secret_file_extn(strstr(encInfo->secret_fname,"."),encInfo) == e_success)		//check whether the secrete file extension is encoded successsfully or not
          {
             printf("INFO : Encoding of secrete file extension is successful\n");

            if(encode_secret_file_size(encInfo->size_secret_file,encInfo) == e_success) 			//check whether the secrete file size is encoded successfully or not
            {
              printf("INFO : Encoding of secrete file size is successful\n");

              if(encode_secret_file_data(encInfo) == e_success) 						//check whether the secrete file data is encoded succesfully or not
              {
                  printf("INFO : Encoding of secrete file data is successful\n");

                 if(copy_remaining_img_data(encInfo->fptr_src_image,encInfo->fptr_stego_image) == e_success)	//check whether remaining source file data is copied to output file is encoded succesfully or not
                 {
                    printf("INFO : Copying of remaining image data is successful\n");
                 }
                else
                {
                    printf("Error : error in copying remaining image data\n");
                    return e_failure;
                }
              }
             else
              {
                  printf("Error : error in encoding of secrete file data\n");
                  return e_failure;
              }
            }
           else
            {
              printf("Error : error in encoding secrete file size\n");
              return e_failure;
            }
          }
         else
          {
            printf("Error : error in encoding of secrete file extension\n");
            return e_failure;
         }
         }
       else
         {
           printf("Error : error in encoding size\n");
           return e_failure;
         }
       }
     else
      {
      printf("Error : error in encoding of magic string\n");
      return e_failure;
      }
     }
   else
   {
      printf("Error: error in copying bmp header \n");
      return e_failure;
   }
    }
   else
   {
      printf("Error : error in check capacity\n");
      return e_failure;
   }

  }
  else
  {
      printf("INFO : Error in opening files\n");
      return e_failure;
  }
  
  return e_success;
}







		


	





