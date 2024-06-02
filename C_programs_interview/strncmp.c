/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int my_strncmp(char *str1,char *str2,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(str1[i]!=str2[i])
        {
           if(str1[i]<str2[i])
               return -1;
           else
               return 1;
        }
    }
    return 0;
}
int main()
{
   char str1[20],str2[20];
   int n;
   printf("enter string 1:");
   scanf("%s",str1);
   printf("Enter the string2:");
   scanf("%s",str2);
   printf("enetr n :");
   scanf("%d",&n);
  int ret=my_strncmp(str1,str2,n);
  if(ret>0)
  {
      printf(" s1 > s2 \n");
  }
  else if(ret < 0)
      printf("s1 < s2 \n");
  else
      printf("equal \n");

    return 0;
}

