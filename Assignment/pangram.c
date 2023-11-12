/* Documentation
Name: PRASHANTH KB
Date: 04/10/2023
Description: Read a string from the user. Check whether the string is Pangram or not A pangram is a sentence containing every letter in the English Alphabet.
sample Input:   Enter the string: The quick brown fox jumps over the lazy dog
Sample Output:  The Entered String is a Pangram String

*/

#include <stdio.h>

int pangram(char []);                                               // function prototype

int main()                                                          // main function
{
    char str[50];                                                   
    int result;
    printf("Enter the string : ");
    scanf(" %[^\n]",str);                                          // enter a string untill a newline
    result = pangram(str);                                           // call the pangram function
    if(result == 26)                                               // check the return value from function
        printf("The Entered String is Pangram String");            // if return value is 26 then pangram string else not
    else
        printf("The Entered String is not Pangram String");

    return 0;
}

int pangram(char str[])                                             // function definition
{
    int arr[26] = {0} ,index=0;                                       // declare the array and intialize with zeros
    int i=0, flag=0;
    while( str[i] !='\0')                                           // run a loop untill newline char from the string
    {
        if( (str[i] >= 97) && (str[i] <= 122) )                    // check for lower  case letters
        {
            index=str[i] - 97;                                     // subtract with 97 to get the index value
        }
        if( (str[i] >= 65) && (str[i] <= 90) )                     // check for the upper case letters
        {
            index=str[i] - 65;                                     // subtract with 65 to get the index values 
        }
         arr[index]=1;                                             // make the array value 1 after the each letter is read 
         i++;                                            
    }
    for(i=0;i<26;i++)                                              // run a loop till array length
    {
        if(arr[i]==1)                                              // if the array value is 1 then increment the flag
            flag++;
    }
    return flag;                                                   // return the flag  
}
        



