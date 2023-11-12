/* Documentation
Name: PRASHANTH KB
Date: 13/10/2023
Description: Write a program to convert the little endian data to big endian
sample Input: Enter the size
              Enter any number in hexadecimal-ABCD
Sample Output:After converion CDAB
sample INPUT: Enter the size:4
              Enter any number in hexadecimal 12345678
Sample output: After conversion 78563412
*/

#include<stdio.h>
int main()
{
    int size,num;                                            // declare the variables
    printf("Enter the size: ");
    scanf("%d",&size);                                       // read the size from the user
    printf("Enter any number in hexadecimal: ");
    scanf("%X",&num);                                        // read the hexa-decimal number
    char *ptr=(char *)&num;                                  //declare a character pointer and assign the addr of num to it by typecasting
    char temp;                                               // declare a temp variable of character type 
      for(int i=0;i<(size/2);i++)                            // run a loop to swap the number of any size
        {
          temp=ptr[i];
          ptr[i]=ptr[size-i-1];                              // perform the swapping
          ptr[size-i-1]=temp;
        }

    printf("After conversion %X\n",num);                     // print the hexa decimal number in big endian format
 


    return 0;
}

