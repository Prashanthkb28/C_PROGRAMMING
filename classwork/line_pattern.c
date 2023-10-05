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
    int n,m,d;
   // printf("Enter n and m values:");
    scanf("%d %d",&n,&m);
    d=n-m;                     // calculating difference total no of char to be printed -middle no of char to be printed
    for(int i=1;i<=n;i++)
    {
        if(i < d/2)
        printf("$");
        else if( (i>d/2) && (i<=n-d/2))
        printf("*");
        else
        printf("$");
    }
    return 0;
}
