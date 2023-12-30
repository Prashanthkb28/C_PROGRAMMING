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
    int num,count=0,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num < 0 || num == 0)
    {
        printf("Invalid input\n");
        return 0;
    }
    printf("The odd numbers are : ");
    for(int i=1;i<=num;i++)
    {
         printf("%d ",2*i-1);
         sum=sum + (2*i-1);
         count++;
        
    }
    printf("\n");
    printf("The sum of %d odd natural numbers : %d",count,sum);
    printf("\n");
 
 
    return 0;
}

