#include<stdio.h>
int main()
{
    int num1 ,num2;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    if (num1 > num2)
        printf("Max of two numbers is %d\n",num1);
    else
        printf("Max of two numbers is %d\n",num2);
    return 0;
}
