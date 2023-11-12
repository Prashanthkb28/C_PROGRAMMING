/* Documentation
Name: PRASHANTH KB
Date: 26/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int is_prime(int);

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if( num > 0)
    {
    if( is_prime(num) )
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
    }
    else
        printf("Inavlid input");
    return 0;
}
int is_prime(int num)
{
    int flag=0,i;
    for(i=2;i<num;i++)
    {
        if( (num % i) == 0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else
        return 0;
}

