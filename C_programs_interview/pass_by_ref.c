/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description
sample Input:
Sample Output:
*/
#include<stdio.h>
void sum_product(int ,int ,int * ,int *);
void sum_product(int num1,int num2,int *sum,int *product)
{
    *sum=num1+num2;
    *product=num1*num2;
}

int main()
{
    int num1,num2;
    int sum=0,product=0;
    printf("Enter the number1 and number2:");
    scanf("%d %d",&num1,&num2);
    sum_product(num1,num2,&sum,&product);
    printf("Sum is %d\n",sum);
    printf("Product is %d\n",product);
    return 0;
}
