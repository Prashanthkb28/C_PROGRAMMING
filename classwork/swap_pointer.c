/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
void swap(int *,int *);
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num1,num2;
   // printf("Enter the number1:");
    scanf("%d",&num1);
    //printf("Enter the number2:");
   scanf("%d",&num2);
    printf("Before swap:\n");
    printf("num1 is %d\n",num1);
    printf("num2 is %d\n",num2);
    swap(&num1,&num2);
    printf("After swap:\n");
    printf("num1 is %d\n",num1);
    printf("num2 is %d\n",num2);
    return 0;
}
