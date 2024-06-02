/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<string.h>
int main()
{

   char str[50],revstr[50],rs[50];
  int i,j,len;
 printf("ENter the string:");
scanf("%s",str); // read string with spaces
// fgets(str,sizeof(str),stdin);
j=0;
len=0;

 for(i=strlen(str)-1;i>=0;i--)
{
    revstr[j++]=str[i];
}
revstr[i]='\0';
printf( "the reverse of a string is %s\n",revstr);




    return 0;
}

