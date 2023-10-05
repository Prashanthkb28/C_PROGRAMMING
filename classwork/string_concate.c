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
    char str1[50],str2[50];
   // printf("Enter the string1: ");
    scanf("%s",str1);
   // printf("Enter the string2: ");
    scanf("%s",str2);
    int len=0,i=0;
    while(str1[len]!='\0')
    len++;
    while(str2[i]!='\0')
    {
        str1[len]=str2[i];
        i++;
        len++;
    }
    str1[len]='\0';
    printf("concatenate string is %s",str1);
}
