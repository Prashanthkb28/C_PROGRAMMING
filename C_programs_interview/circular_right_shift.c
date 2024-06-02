/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description:circular right shift
sample Input:
Sample Output:
*/

#include<stdio.h>
int print_bits(int);
int circular_right_shift(int ,int);

int circular_right_shift(int num,int n)
{
 // unsigned int a=num;
    //mask=( ((1<<n)-1) << (32-n) );
    return (num & ((1<<n)-1) ) << (32-n) |((unsigned) num>>n);
}
int print_bits(int result)
{
    int i;
    for(i=31;i>=0;i--)
    {
        if(result & (1<<i))
            printf("1");
        else
            printf("0");
    }
}
int main()
{
 int num,n,result;
 printf("Enetr the number:");
 scanf("%d",&num);
 printf("Enter the no of shifts:");
 scanf("%d",&n);
 result=circular_right_shift(num,n);
 print_bits(result);
// printf("\n%d\n",result);
 
    return 0;
}

