/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int num,pos,n;
    printf("enter the number pos n:");
    scanf("%d %d %d",&num,&pos,&n);
    printf("the binary format of number");
    for(int i=7;i>=0;i-- )
    {
        if(num &(1<<i))
        printf("1 ");
        else
        printf("0 ");
    }
    printf("\n");
    int mask=((1<<n)-1);
    int result=num|(mask<<(pos-n+1));
    printf("the result in binary:\n");
    for(int i=7;i>=0;i-- )
    {
        if(result &(1<<i))
        printf("1 ");
        else
        printf("0 ");
    } 
 
    return 0;
}

