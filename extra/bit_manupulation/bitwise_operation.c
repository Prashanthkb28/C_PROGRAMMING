/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description:bitwise operation
sample Input:
Sample Output:
*/

#include<stdio.h>
int print_bits( int);
int print_bits(int num)
   {
     
       int i;
       for(i=31;i>=0;i--)
       {
           if(num &(1<<i))
               printf("1");
           else
               printf("0");
       }
   }
void print(int a, int b,int result)
{
printf("\na=%d\n",a);
print_bits(a);
printf("\nb=%d\n",b);
print_bits(b);
printf("\nresult=%d\n",result);
print_bits(result);
}

int main()
{
 
int a,b;
int result;
printf("Enter the two integers:");
scanf("%d %d",&a,&b);
result=a|b;
printf("bitwise or of %d %d is %d",a,b,result);
print(a,b,result);
}
