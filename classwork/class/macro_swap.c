/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description: to swap the number using temproary variable using macro
sample Input:
Sample Output:
*/

#include<stdio.h>
#define SWAP(x,y) \
{                 \
    int temp=x;   \
    x=y;          \
    y=temp;       \
}

int main()
{
    int num1,num2;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    printf("Enter the num2: ");
    scanf("%d",&num2);
    SWAP(num1,num2)
    printf("After swapping:\n");
    printf("num1 is %d\nnum2 is %d\n",num1,num2);
}
