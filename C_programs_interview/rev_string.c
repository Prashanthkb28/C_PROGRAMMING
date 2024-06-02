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
 char str[12],rev[12];
 printf("Enter the string:");
 //scanf("%s",str);
 fgets(str,12,stdin);
 int len=0,i=0;
 while(str[len]!='\0')
     len++;
 printf("The Length of the entered string is %d\n",len);
 while(str[i]!='\0')
 {
     rev[len-i-1]=str[i];
     i++;
 }
 rev[i]='\0';
printf("The reversed string is :");
printf(" %s\n",rev);
 
    return 0;
}

