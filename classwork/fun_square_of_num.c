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
    printf("Square is %d",(square(num)));
    return 0;
}
int square(int num)
{
    return num*num;
}
