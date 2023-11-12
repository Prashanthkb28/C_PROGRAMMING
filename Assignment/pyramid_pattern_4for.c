/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description:WAP to print a pattern
sample Input:
Sample Output: enter the num:6
6 
5 6 
4 5 6 
3 4 5 6 
2 3 4 5 6 
1 2 3 4 5 6 
2 3 4 5 6 
3 4 5 6 
4 5 6 
5 6 
6 

*/

#include<stdio.h>
int main()
{

   int i,j,num;
  printf("enter the num:");
 scanf("%d",&num);
 //upper half pattern
for(i=num;i>=1;i--)
{
   for(j=i;j<=num;j++)
   {
      printf("%d ",j);
   }
  printf("\n");
}
//lower half pattern
for(i=2;i<=num;i++)
{
    for(j=i;j<=num;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
}
 
    return 0;
}

