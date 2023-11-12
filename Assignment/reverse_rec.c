/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description:  Read a string from user.Implement using recursive function without using any loops Do not print character by character.
sample Input:   Enter a string : Hello World
Sample Output:  Reverse string is : dlroW olleH

*/

#include <stdio.h>

void reverse_recursive(char str[], int ind, int len);                      // function prototype

int main()                                                                 // main function
{
    char str[30];
    
    int length = 0;
    printf("Enter any string : ");
    scanf("%[^\n]", str);                                                 // read the string from user untill newline
    while(str[length] != '\0')
    {
        length++;                                                         // calculate the the length of string
    }
    
    reverse_recursive(str, 0, length);                                    // function call  by passing string base addr, index=0 and len
    
    printf("Reversed string is %s\n", str);
}

void reverse_recursive(char str[], int index, int length)                 // function definition
{
   char temp;                                                             // declaraing temproray variable to swap, by swapping method
   temp = str[index];                                                       // assign the fisrt index chararcter to temp
   str[index] = str[length-index-1];                                        // assign the last index character to first index
   str[length-index-1] = temp;                                              // first index character to last index
   if( index < (length/2)-1 )                                                // untill index less than half of the length 
   {
       reverse_recursive(str, index + 1 ,length);                           // call the function recursively
   }
}


