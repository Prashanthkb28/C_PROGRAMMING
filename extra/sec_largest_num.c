/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description: to find the second largest number from a given 3 numbers
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    int large=num1;
    int small=num1;
    int seclarge;
    if (num2>large)
        large=num2;
    if(num3>large)
        large=num3;
    if(num2<small)
        small=num2;
    if(num3<small)
        small=num3;
    seclarge=(num1+num2+num3)-(large+small);
    printf("Largest number is %d ",large);
    printf("smallest number is %d ",small);
    printf("second Largest number is %d ",seclarge);
    return 0;
}
