/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description: reverse of a string using recursion
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<string.h>
void reverse_rec(char str[],int index,int len)
{
    char temp;
    temp=str[index];
    str[index]=str[len];
    str[len]=temp;
    index++;
    len--;
    if(index<len)
        reverse_rec(str,index,len);
}
int main()
{
    char str[50];
    printf("Enter the string:");
    scanf("%[^\n]", str);
    int len=strlen(str);
    reverse_rec(str,0,len-1);
    printf("Reversed string is %s\n",str);
    return 0;
}

