/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description:WAP to find the power of N series using loops
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int base,exp,power=1;
    printf("Enter the base value:");
    scanf("%d",&base);
    printf("ENter the exponent value:");
    scanf("%d",&exp);
    for(int i=1;i<=exp+1;i++)
    {
        printf("%d ",power);
        power=power*base;
    }
    return 0;
}
    
