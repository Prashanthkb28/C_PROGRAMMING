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
    char str1[100],str2[100];
    int i;
    printf("Enter the string:");
    fgets(str1,sizeof(str1),stdin);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf(" Copied string is %s",str2);
}
