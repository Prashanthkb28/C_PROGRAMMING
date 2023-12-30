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
    int month;
    printf("Enter the month :");
    scanf("%d",&month);
/*    if( month == 1 || month == 3 || month == 5 || month == 7|| month == 8 || month ==10 || month == 12 )
        printf("No. of days in the given month is 31\n");
    else if( month == 4 || month == 6 || month == 9 || month == 11)
        printf("No. of days in the given month is 30\n");
    else if( month == 2)
        printf("No. of days in the given month is 28/29");
    else
        printf("Invalid input");*/

    if( month < 0 || month > 12)
    {
        printf("Error : enter positive number\n");
return 0;
    }
    if( month == 2)
    {
        printf("No of days is 28/29\n");
    }
    else
    {
        month =  (month > 7)?(month -7):(month);
       if(month %2 == 0)
       {
           printf("no of days is 30\n");
       }
       else
       {
           printf("no of days is 31\n");
       }
    }
    return 0;
}

