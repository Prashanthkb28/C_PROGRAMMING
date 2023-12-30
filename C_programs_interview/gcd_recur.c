/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int gcd(int num1,int num2)
{
    if( num1 == 0)
        return num2;
    else if(num2 ==0)
        return num1;
    else
        if( num1 < num2)
            return gcd(num2,num1);
         else
             return gcd(num2,num1%num2);
}

int main()
{
    int num1,num2;
    printf(" Enetr the two integeres:");
    scanf("%d %d",&num1,&num2);
    if(num1 <0 || num2 < 0)
    {
        printf("Error: Enter positive values\n");
        return 0;
    }
    int result = gcd(num1,num2);
    printf(" The gcd of %d and %d is %d :\n",num1,num2,result);

    return 0;
}

