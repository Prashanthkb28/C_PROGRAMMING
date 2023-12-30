/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
 

   char str[100];
  printf("Enter the string:");
 fgets(str,100,stdin);
 int len=0,start=0;
 while(str[len]!='\0')
 {
    len++;
 } 
 while(start<len-1)
 {
     char temp=str[start];
     str[start]=str[len-1];
     str[len-1]=temp;
     start++;
     len--;
 }
 printf("The resverse of astring is %s\n",str);
    return 0;
}

