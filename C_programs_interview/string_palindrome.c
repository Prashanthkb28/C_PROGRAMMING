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
 char str[12];
 printf("Enter the string:");
 scanf("%s",str);
 //fgets(str,12,stdin);
 int len=0,i=0,flag=0;
 while(str[len]!='\0')
     len++;
 printf("The Length of the entered string is %d\n",len);
 while(str[i]!='\0')
 {
     if(str[i]!=str[len-i-1])
     {
         flag=1;
         break;
     }
     i++;
 }
if(flag)
    printf("String is not a Palindrome\n");
else
    printf("String is a Palindrome\n");
return 0;
}

