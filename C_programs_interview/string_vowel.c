/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int hasVowel(char *str)
{
    while(*str)
    {
     if( *str == 'a' || *str == 'A' || *str == 'e' || *str == 'E' || *str == 'i'||*str == 'I' || *str == 'O'||*str == 'o'||*str =='u'||*str == 'U' )
    {
        return 1;
    }
    str++;
    }
    return 0;
}

int main()
{
    char str[50];
    printf("Enter the string : ");
    scanf("%s",str);
    if(hasVowel(str) )
    {
        printf("Yes,vowel is present in the string.\n");
    }
    else
    {
        printf("No,vowel is not present in the string .\n");
    }
}

 
 

