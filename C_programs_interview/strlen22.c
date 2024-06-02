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

   int length=0,i=0;
  char str[40];
  char *ptr=str;
  printf("Enter the string:");
 fgets(str,40,stdin);
//  scanf("%s",str);
 while(*ptr !='\0')
 {
     length++;
     ptr++;
 }
 printf("String length is %d\n",length-1);

 
    return 0;
}

