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
    int row;
    printf("Enter he number of rwos :");
    scanf("%d",&row);
   /* for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    } */
 
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
 
    return 0;
}

