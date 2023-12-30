/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int replace_nbits_from_pos(int ,int ,int ,int); 
int replace_nbits_from_pos(int num ,int a,int b, int val) 
{
    int n=b-a+1;
    return (val &(~(((1<<n)-1)<<n))) | (num&((1<<n)-1))<<n;
}
int main()
{

   int num,a,b,val,res=0;
  printf("Enter the num,a,b, and val:");
 scanf("%d %d %d %d",&num,&a,&b,&val);
res=replace_nbits_from_pos(num,a,b,val); 
printf("result=%d",res);
 
    return 0;
}

