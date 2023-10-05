/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description: to print the pattern 
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
    {
        int n,m,d;
        printf("Enter the total number(odd) of charceters to be printed:");
        scanf("%d",&n);
        printf("Enter the total number(odd) of  middle charceters to be printed:");
        scanf("%d",&m);
        d=n-m;
        for(int i=1;i<=n;i++)
        {
            if(i<d/2)
            {
                printf("$");
            }
            else if ((i>d/2) && (i<=n-d/2)) // can use this condition also i>=d/2 +1 && i<=(d/2)+1+n
            {
                printf("*");
            }
            else
                printf("$");
        }
        return 0;
    }


