/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description:to convert days into years,months and days
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int no_days,days,years,months;
    printf("Enter the total number of days:");
    scanf("%d",&days);
    if (no_days >0)
    {
    no_days=days;
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    printf("%d No of days=%d days ,%d months,%d years\n",no_days,days,months,years);
    }
    else
        printf("Enter a valid +ve integer");
    return 0;
}

