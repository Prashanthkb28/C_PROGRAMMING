/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int i=31;i>=0;i--)
    {
        if(num & (1<<i))
        printf("1");
        else
        printf("0");
    }
    return 0;
}
