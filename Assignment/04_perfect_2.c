/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description: WAP  to check if number is perfecrt or not
              this an inculding method that means the given number is also taken into factor consideration
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if ( num < 0)
    {
        printf("Error: Inavlid Input, Enter only positive number\n");
    }
    else
    {
        for(int i=1;i<=num;i++)
        {
            if(num % i == 0)
            {
                sum=sum+i;
            }
        }
        if ( (sum/2) == num)
        {
            printf("Yes,entered number is perfect number\n");
        }
        else
        {
          printf("No,entered number is not a perfect number\n");
        }
    }
    return 0;
}

