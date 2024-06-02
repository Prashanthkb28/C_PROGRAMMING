/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int my_strcmp(const char str1[],const char str2[])
{
    int i=0;
    while(str1[i] !='\0' && str2[i]!='\0')
    {
        if( str1[i] != str2[i] )
        {
            return str1[i]-str2[i];
        }
        i++;
    }
   return 0;
               
 }
    
int main()
{
 char str1[20],str2[20];
 printf("Enter the string 1: ");
 scanf("%s",str1);
 printf("Enter the string 2: ");
 scanf("%s",str2);
 int res = my_strcmp(str1,str2);
 if(res == 0)
 {
     printf("Two strings are equal\n");
     return 0;
 }
 if(res < 0)
 {
     printf("str1 is less than str2\n");
 }
 else
     printf("str1 is more than str2\n");
    return 0;
}

