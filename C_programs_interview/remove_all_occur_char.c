/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    char str[20];
    char ch;
    printf("Enter the string : ");
    scanf("%s",str);
    printf("Enter the character to remove from the string : ");
    scanf(" %c",&ch);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if( str[i] != ch)
        {
            str[j++]=str[i];
        }
        i++;
    }
    printf( "The string is %s",str);

 
 
    return 0;
}

