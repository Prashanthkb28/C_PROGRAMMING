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
    int num,rev=0,rem,orginal;
    printf("Enter the number:");
    scanf("%d",&num);
    orginal=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if (orginal==rev)
    printf("The Entered number is an palindrome.");
    else
    printf("The Entered number is not an palindrome.");
}
