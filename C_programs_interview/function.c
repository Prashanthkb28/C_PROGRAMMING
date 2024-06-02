/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
float add(float,float);
int main()
{
    float num1=2.4,num2=3.8;
    float sum;
    sum=add(num1,num2);
    printf("sum=%f",sum);
    return 0;
}
float add(float num1,float num2)
{
    float sum=0;
    sum=num1+num2;
    return sum;
}

