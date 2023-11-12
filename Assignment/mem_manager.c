/* Documentation-------------------------------------------------------------------------------------------------------------------
Name: PRASHANTH KB
Date: 26/10/2023
Description:Provide a menu to manipulate or display the value of variable of type t To take 8 consecutive bytes in memory. Provide a menu to manipulate or display the value of variable of type t (input) & indexed at i (i/p)
Allocate 8 consecutive bytes in memory.It should allow to add elements of different data types which data type size is less than or equal to 8
sample Execution:
Sample execution: -
Test Case 1:
user@emertxe] ./mem_manager
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program

Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4

----------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>                                                      // to include __fpurge()
int main()
{
    int choice;
    void *ptr = malloc(8);                                                  // dynamic memory allocation of 8bytes
    if(ptr==NULL)                                                         // checking for successful memory allocated or not
    {
        printf("Memory allocation failed...!\n");
    }
    // initalize the flag varibales to 0  indicating data of type is not stored
    int char_flag1=0, char_flag2=0, int_flag=0, short_flag=0, float_flag=0, double_flag=0;    
    int option;
    int index;
    while(1)
    {
        printf("Menu: \n");                                                // displayong menu
        printf("1.Add element\n2.Remove element\n3.Display element\n4.Exit from the program\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);                                              // reading the choice from user
        switch(choice)                                                    // switch to select the operation
        {
            case 1:                                                       //---> to add element -->
                   printf("Choice ---> 1\n");
                   printf("Enter the type you have to insert:\n");       // display menu to to enter type of data to add
                   printf("1.int\n2.char\n3.float\n4.short\n5.double\n");
                   scanf("%d",&option);                                  // reading the options from user
                   switch(option)                                        // switch to select to add different type of data
                   {
                       case 1:                                           //---> to add intger type of data-->
                              if(int_flag == 0 && float_flag == 0 && double_flag == 0)   // if the int ,float and double ele are not present (validating to store the int data )
                              {
                                  printf("Enter the iteger value: ");              // read the integer value from user
                                  scanf("%d",(int *)(ptr + 4));                       // type cast and add to index 4
                                  int_flag = 1;                                    //set flag to 1 indicating integer value is added/present
                              }
                              else
                                  printf("Memory is full...\nInsufficent space\n");// else print the no space message
                              break;
                       case 2:                                                //--> to add character type of data-->
                            
                              if(char_flag1 == 0 && double_flag == 0)            // validating to store char data
                              {
                                  __fpurge(stdin);                           // clear the standard i/p buffer
                                  printf("Enter the character at index 0: ");
                                  scanf("%c",(char *)ptr);                   // read the charcter from user and store at index 0
                                  char_flag1 = 1;                              // set the char flag1 to 1 
                              }
                              if(char_flag2 == 0 && double_flag == 0)           // if char at index1 and double data not prsent 
                              {
                                  __fpurge(stdin);                          // clear the std i/p buffer
                                  printf("Enter the character at index 1: ");
                                  scanf("%c",(char *)ptr + 1);               // read the char from user and store at index 1
                                  char_flag2 = 1;                            // set the char flag2 to 1
                              }
                              else

                                  printf("Memory is full...\nInsufficient space\n");    
                              break;
                       case 3:
                              if(float_flag == 0 && int_flag == 0 && double_flag == 0)  // validating to store the float
                              {
                                  printf("Enter the float value: ");               
                                  scanf("%f",(float *)(ptr + 4));                   // read the float data and store at index 4
                                  float_flag = 1;                                   // set the float flag to 1
                              }
                              else
                                  printf("Memory is full...\nInsufficent space\n");
                              break;
                       case 4:
                              if(short_flag == 0 && double_flag == 0)                //validating for short and double data
                              {
                                  printf("Enter the short value: "); 
                                  scanf("%hd",(short *)(ptr + 2));                  // read the data from user and add at index2
                                  short_flag = 1;                                  // set the flag bit as 1
                              }
                              else
                                  printf("Memory is full...\nInsufficent space\n");
                              break;
                       case 5:
                              if( char_flag1 == 0 && char_flag2 == 0 && short_flag == 0 && int_flag == 0 && float_flag == 0 && double_flag == 0)                                                                             // validating to store the double data
                              {
                                  printf("Enter the doible value: ");    
                                  scanf("%lf",(double *)(ptr));                    // read the double data and store at index0
                                  double_flag = 1;                                // set the  double flag to 1
                              }
                              else
                                  printf("Memory is full...\nInsufficent space\n");
                              break;
                       default: 
                               printf("Inavlid option choice\n");                 // invalid option message
                    
                   }
                   break;
            case 2:                                                    //---> for remove the element-->
                   if( char_flag1 == 1 )                               // if the particular flag type is set then print the value
                        printf("0 -> (char) %c\n",*(char *)ptr);

                   if( char_flag2 == 1 )
                        printf("1 -> (char) %c\n",*(char *)(ptr+1));
                    
                   if( short_flag == 1 ) 
                        printf("2 -> (short) %hd\n",*(short *)(ptr+2)); 

                   if( int_flag == 1 )
                        printf("4 -> (int) %d\n",*(int *)(ptr+4));
                         
                   if( float_flag == 1 )
                        printf("4 -> (float) %f\n",*(float *)(ptr+4));
                         
                   if( double_flag == 1 )
                        printf("0 -> (double) %lf\n",*(double *)ptr);

                   printf("Enter the index value to be deleted: ");     //prompting user to enter the index value that needs to be deleted
                   scanf("%d",&index);                                  // read the index from user


                   if(index == 0 && char_flag1 == 1)                   // if the index value is 0 and validating char is stored or not
                   {
                       char_flag1 = 0;                                 // if char at index 0 present then make it to 0
                       printf("index %d value is deleted successfully..\n",index);
                   }
                   else if(index == 0 && double_flag == 1)            // validating for double data is stored /not
                   {
                       double_flag = 0;                               // set double flag as 0
                       printf("index %d value is deleted successfully..\n",index);
                   }
                   else if(index == 1)                                // validating for char data stored at index 1
                   {
                      char_flag2 = 0;
                      printf("index %d value is deleted successfully..\n",index); 
                   }
                   else if(index == 2)                                // validating for short data stored at index 2
                   {
                       short_flag = 0;                                // if integer data stored make flag to 0
                       printf("index %d value is deleted successfully..\n",index);
                   }
                   else if(index == 4 && int_flag == 1)              // validating for integer data stored/not
                   {
                       int_flag = 0;
                       printf("index %d value is deleted successfully..\n",index);
                   }
                   else if(index == 4 && float_flag == 1)            // validating for float data stored/not
                   {
                       float_flag = 0;                               // if float value stored then make float flag to 0
                       printf("index %d value is deleted successfully...\n",index);
                   }
                   else
                       printf("Enter the valid index 0-4\n");
                   break;
            case 3:                                                 //--->to display the elements--->

                   if( (int_flag==0) && (char_flag1==0) && (char_flag2==0) && (short_flag==0) && (float_flag==0) && (double_flag==0) )
                       printf("NO ELEMENTS ARE PRESENT  MEMORY IS EMPTY....!\n");  // if no elements stored print message
                            // validating for element stored/not and display elements stored in memory
                   if(char_flag1 == 1)                       // if particlar data flag is set then print the value
                        printf("0 -> (char) %c\n",*(char *)ptr);

                   if(char_flag2 == 1)
                        printf("1 -> (char) %c\n",*(char *)(ptr+1));
                    
                   if(short_flag == 1) 
                        printf("2 -> (short) %hd\n",*(short *)(ptr+2)); 

                   if(int_flag == 1)
                        printf("4 -> (int) %d\n",*(int *)(ptr+4));
                         
                   if(float_flag == 1)
                        printf("4 -> (float) %f\n",*(float *)(ptr+4));
                         
                   if(double_flag == 1)
                        printf("0 -> (double) %lf\n",*(double *)ptr);
                   break;
            case 4:                                          //---> choice to end the program--->
                   free(ptr);                                // free the pointer which is allocated dynamically
                   ptr = NULL;
                   exit(1);                                  // exit 1 to terminate the program 
                   break;
            default:
                   printf("Inavlid choice\n");               // invalid choice 
                              
        }                                                    // outer switch close 
    }                                                        // close of while loop
    return 0;
}                                                            // end of main

