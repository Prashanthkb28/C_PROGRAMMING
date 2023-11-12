/* Documentation
Name: PRASHANTH KB
Date: 12/10/2023
Description::  WAP to print all possible combinations of given string.
sample Input:  Enter a string: abc
Sample Output:  abc
                acb
                bac
                bca
                cba
                cab
*/

#include<stdio.h> 

void combination(char [],int ,int );              // function prototype to find the all possible combination
int my_strlen(char []);                           // function prototype to find the string length
void swap(char*, char *);                                // function prototype to swap the characters

int main()                                               // main functiom

{
        char str[100];
        int n;
        int res;
        printf("Enter a string: ");
        scanf("%100[^\n]",str);                         // read the string from user
        n = my_strlen(str);                             // calling strlen function and collecting length of string
        combination( str, 0, n-1 );                     // calling the function to find the all combination
        return 0;
}
int my_strlen(char str[])                               // function definition to find the string length
{
    int length=0;
    while( str[length] !='\0' )                         // run  a loop untill string reaches null character
    {
        length++;                                       // increment the length untill reaching null char
    }
    return length;                                      // return the length of the string
}
void swap(char *x, char *y)                             // function definition to swap the characters
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void combination(char str[],int start ,int end )        // function definition to find all possible combination
{
    if( start == end )                                  // if the startinf index and end index are same then print string
    {
        printf("%s\n",str);
    }
    else
    {
        for( int i = start; i <= end ;i++ )             // run a loop upto end 
        {
            swap( &str[i], &str[start] );               // swap the characters starting index and ith index
            combination(str, start+1, end );            // call the function
            swap( &str[i], &str[start] );               // swap the characters again
        }
    }
}

    

