/* Documentation
Name: PRASHANTH KB
Date: 04/10/2023
Description:   WAP to reverse a string .Read a string from user.Implement using loops.Do not print character by character.
sample Input:   Enter a string : Hello World
Sample Output:  Reverse string is : dlroW olleH

*/

#include <stdio.h>  

void reverse_iterative(char str[]);                            // function prototype

int main()                                                     // main function
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);                                       // read the string untill newline
    
    reverse_iterative(str);                                     // function call
    
    printf("Reversed string is %s\n", str);
}

void reverse_iterative( char str[])                            // function definition
{
    int length = 0;
    while(str[length] != '\0' )                                // calculate the length of the string
    {
        length++;
    }
    char temp;
    for(int i=0;i< (length/2);i++)                            // swap the characters
    {
        temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
}   

