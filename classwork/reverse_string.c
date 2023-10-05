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
    char str[100],revstr[100];
    int len=0;
    printf("enter the string:");
    scanf("%s",str);
    while(str[len]!='\0')                      // calculating the length odf string
    {
        len++;
    }
    for(int i=len-1;i>=0;i--)                      // copy the string from reverse
    {
        revstr[len-i-1]=str[i];
    }
    printf("Reversed string is %s",revstr);
}
