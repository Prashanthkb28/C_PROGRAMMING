/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int calculateStringWeight(char *str)
{
    int sum =0;
    while(*str)
    {
        sum = sum + *str;
        str++;
    }
    return sum;
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
printf("String weight: %d",calculateStringWeight(str) );
    return 0;
}

