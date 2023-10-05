/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description:WAP to multiply 2 numbers without using * operator
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int num1,num2,result=0;
    printf("ENTER THE TWO NUMBERS:");
    scanf("%d %d",&num1,&num2);
    for(int i=0;i<num2;i++)
    {
        result+=num1;
    }
    printf("THE MULTIPLICATION OF TWO NUMBERS is %d\n",result);
    return 0;
}
