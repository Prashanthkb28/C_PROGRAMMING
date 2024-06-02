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

   int num,power=1,rem;
   long long number=0;
  printf("Enter the number:");
 scanf("%d",&num);
 printf("the binary value is:");
while(num!=0)
{

  rem= num%2;
  num=num/2;
  number=number+rem*power;
  power=power*10;
}
  printf("%lld",number);
    return 0;
}

