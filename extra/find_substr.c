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
   char str[50],substr[30];
   int count1=0,count2=0,flag=0;
   printf("Enter the string : ");
   fgets(str,sizeof(str),stdin);
   printf("Enter the substring to be find : ");
   fgets(substr,sizeof(substr),stdin);
   while(str[count1]!='\0')
       count1++;
   while(substr[count2]!='\0')
       count2++;
   for(int i=0;i<=count1-count2;i++)
   {
       for(int j=i;j<i+count2;j++)
       {
           flag=1;
           if(str[j] !=substr[j-i])
           {
               flag=0;
               break;
           }
       }
       if(flag == 1)
           break;
   }
   if(flag ==1)
       printf("found\n");
   else
       printf("not found\n");
 
    return 0;
}

