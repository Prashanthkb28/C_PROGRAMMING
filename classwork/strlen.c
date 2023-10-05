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
    char str[50];
   // printf("Enter the String:");
    fgets(str,sizeof(str),stdin);
    int length=0,i=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    length-=1;     //length-1
    printf("String length is %d",length);
}
