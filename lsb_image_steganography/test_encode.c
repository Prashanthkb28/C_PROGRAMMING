/*DOCUMENTATION---------------------------------------------------------------------------------------------------------------------------
Name: PRASHANTH K B
Date: 06/11/2023
Description: Project on LSB image Steganography

sample output :./a.out -e beautiful.bmp secret.txt
INFO : Selected encoding
INFO : Output file name is not passed ,so created stego.bmp as default
INFO : Read and validate encode arguments is success
<--------ENCODING STARTED--------------->
Open files is successful
width = 1024
height = 768
INFO : Check capacity is successful
INFO : Copying bmp header is successful
INFO : Encoding of magic string is successfull
INFO : Encoding of size is successful
INFO : Encoding of secrete file extension is successful
INFO : Encoding of secrete file size is successful
INFO : Encoding of secrete file data is successful
INFO : Copying of remaining image data is successful
INFO : DONE 
<------ENCODING COMPLETED------------>
Sample output : ./a.out -d stego.bmp
INFO : Selected decoding
INFO : argv[2] is a .bmp file
INFO : The output decoded data file is not passed , so created decode.txt
INFO : Read and validate decode arguments is successfull
<----------DECODING STARTED------------->
INFO : Opening files are succesful
INFO : Magic strings are equal, data is decoded from the image
INFO : Magic string is decoded successfully
INFO : Secret file extension is been decoded successfully and attached extension to the file
INFO : Decoding of file extension is successful
INFO :Decoding of secrete file size is successful
INFO : Decoding of secrete file data is successful
INFO : DONE
<--------DECODING COMPLETED---------->
---------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include "encode.h"
#include "types.h"
#include <string.h>
#include "decode.h"

/* passing the command line arguments to the main function */
int main(int argc, char *argv[])
{
    /* validating for the required command line arguments */
    if( argc >= 3)
    {

       if(check_operation_type(argv) == e_encode)                                // check if the option is -e then start encoding
        {
           EncodeInfo encInfo;                                                   // decalre the srtucture varibale for EncodeInfo struct
	       printf("INFO : Selected encoding\n");
	       if(read_and_validate_encode_args(argv,&encInfo) == e_success)         // validate the arguments required for encodidng
	        {
                printf("INFO : Read and validate encode arguments is success\n");
                printf("<--------ENCODING STARTED--------------->\n");
                /* function call do_encoding for encoding */
	            if(do_encoding(&encInfo) == e_success)                           // check whether the encoding is successful or not
                {
                    printf("INFO : DONE \n");
                    printf("<------ENCODING COMPLETED------------>\n");
                }
                else
                {
                    printf("ERROR : Failed to encode\n");
                    return -1;
                }
	        }
           else
           {
               printf("ERROR : Read and validate encode arguments failed\n");
               return -1;
           }
        }

       else if(check_operation_type(argv) == e_decode)                    // if the option is -d then do decoding
        {
          DecodeInfo decInfo;                                             // structure variable for DecodeInfo structure
	      printf("INFO : Selected decoding\n");
	     if(read_and_validate_decode_args(argv,&decInfo) == e_success)    // validate the required command line arguments  for decoding
	      {
	        printf("INFO : Read and validate decode arguments is successfull\n");
            printf("<----------DECODING STARTED------------->\n");
            /* function call for decoding */
	        if(do_decoding(&decInfo) == e_success)                       // check for the decoding is success or not ( function call)
            {
                printf("INFO : DONE\n");
                printf("<--------DECODING COMPLETED---------->\n");
            }
            else
            {
                printf("ERROR : Failed to decode\n");
                return -1;
            }
          }
         else
         {
             printf("ERROR : Read and validate decoding arguments is failed\n");
             return -1;
         }

        }
      else
      {
        printf("Unsupported Operation\nUSAGE :\nEncoding: ./a.out -e beautiful.bmp secret.txt [stego.bmp]\nDecoding: ./a.out -d stego.bmp [decode.txt]\n");
      }
    }
     else
       {
        printf("Error : PASS THE REQUIRED COMMAND LINE ARGUMENTS\nEncoding: 4 arguments\nDecoding: 3 arguments\n");
        printf("Usage: \nEncoding : <executable_file> -e <bmp_file> <txt_file> [<o/p_bmp_file>]\nDecoding : <executable_file> -d <bmp_file> [<txt_file>]\n");
       }

    return 0;
}

/* function definition to check the operation type */
OperationType check_operation_type(char *argv[])
{
    if(strcmp(argv[1], "-e") == 0)                     // if option is -e then do encoding
	return e_encode;
    else if(strcmp(argv[1], "-d") == 0)                // if option is -d then do decoding
	return e_decode;
    else
	return e_unsupported;                              // else unsupported operation
}



