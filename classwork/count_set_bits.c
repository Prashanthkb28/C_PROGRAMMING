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
    unsigned int num;
    int count=0;
    printf("Enter the number:");
    scanf("%u",&num);
    while(num)
    {
        count +=num&1;
        num=num>>1;
    }
    printf("The count of set bits is %d",count);
    return 0;
}


