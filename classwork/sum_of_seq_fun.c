/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int sum_sequence(int);
int sum_sequence(int num)
{
    if(num>0)
    {
        int sum=sum_sequence(num-1);
        return num+sum;
    }
    else
    return 0;
}
int main()
{
    int num;
    printf("Enter the N value:");
    scanf("%d",&num);
    int sum=sum_sequence(num);
    printf("Sum is %d",sum);
    return 0;
}
