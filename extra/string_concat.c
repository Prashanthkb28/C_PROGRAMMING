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
 char str[50],dest[50];
 printf("Enter the string1:");
 scanf("%s",str);
 printf("Entered the string2:");
 scanf("%s",dest);
 int len=0,i=0;
 while(dest[len]!='\0')                                  // calculating the destination string length
     len++;
 printf("The Length of the entered string is %d\n",len);
 //performing the strcat(dest,str);
 while(str[i]!='\0')
 {
    dest[len]=str[i];
    i++;
    len++;

 }
 dest[len]='\0';
 printf("the destinatin string is %s",dest);
}
