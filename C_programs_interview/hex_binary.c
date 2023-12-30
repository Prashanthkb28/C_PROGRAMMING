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
    unsigned int hex;
    printf("Enter the hexadecimal value : ");
    scanf("%X",&hex);
    printf("Binary equivalent of %X is : ",hex);
    for(int i=31;i>=0;i--)
    {
        printf("%d",(hex>>i)&1);
       }
    printf("\n");

 
 
    return 0;
}

