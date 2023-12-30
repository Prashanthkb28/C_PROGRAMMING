#include<stdio.h>
int main()
    {
        int num;
        printf("Enter the number:");
        scanf("%d",&num);
        while(num>0)
        {
            int mod=num%10;// split the digit and get last digit
            printf("%d\n",mod);// print the digit
            num=num/10;// divide num
        }
        return 0;
    }
/* example: num=123
      step1:
      num!=0
      mod=123%10---->3
      num=123/10-----12
step2:
num=12
mod=12%10--->2
num=12/10--->1
step3:
num=1
mod=1%10-->1
num=1/10-->0
step4:
num=0 exit loop */
