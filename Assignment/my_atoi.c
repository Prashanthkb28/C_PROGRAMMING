/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description: Write a program to implement atio().int my_atoi(const char *s)The function will recieve a string and covert the number stored in the string into exact integer number.Return the number.
sample Input:  Enter a numeric string: -12345
Sample Output: String to integer is -12345

*/

#include <stdio.h>

int my_atoi(const char []);                                     // function prtotype to implement ascci to integer

int main()                                                     // main function
{
    char str[20];
    
    printf("Enter a numeric string : ");                      // read the string from user
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));        // call the function and return the integer value
}
int my_atoi( const char str[])                                 // function definition
{
    int i=0, sign=1, res=0;                                   
    if(str[i] == '+')                                            // if the first index of string is + char
    {
        i = 1;                                                    // start the index with 1 to convert from ascci to int
    }
    if(str[i] == '-')                                             // if the first index of string is - char 
    {
        i = 1;                                                    // start the index with 1 to convert from ascci to int
        sign = -1;                                                // make the sign has negative so that help to print negative values
    }
    while(str[i]>='0' && str[i]<='9' && str[i]!='\0')           // check the string untill not null and string to be integer values
    {
        res = res*10 + (str[i] - '0');                                // to convert the ascii to intger
        i++;  
    }
    return (res*sign);                                           // along with the sign return 
}
