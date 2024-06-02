/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>

int my_strlen(char *str)
{
    if(*str=='\0')
        return 0;
    else
      return 1+ my_strlen(str+1);
} 
int main()
{
    char str[20];
    printf("Enter the str ");
    scanf("%[^\n]",str);
    printf("length = %d",my_strlen(str) );
    /*int len=0;
    while(str[len]!='\0')
        len++;
    printf("Length of string is :%d",len);*/
    /*char *p=str;
    while(*p)
        p++;
    printf("length = %d",(p-str));*/

    return 0;
}

