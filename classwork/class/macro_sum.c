/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description:to find the sum of two numbers using macro
sample Input:
Sample Output:
*/

#include<stdio.h>
#define SUM(x,y)   (x+y)
int main()
{
    int num1,num2;
    printf("Enter the num1: ");
    scanf("%d",&num1);
    printf("Enter the num2: ");
    scanf("%d",&num2);
    printf("The Sum is %d",SUM(num1,num2));
}
