/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description: program to set clear get nth bit using macros
sample Input:
Sample Output:
*/

#include<stdio.h>
#define SET(x,n) (x|(1<<n))
#define CLEAR(x,n) (x&(~(1<<n)))
#define GET(x,n) (x&(1<<n))
int main()
{
    int num,n;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the nth bit: ");
    scanf("%d",&n);
    printf( "the setting the nth bit is %d\n" ,SET(num,n));
     printf( "the clearing the nth bit is %d\n" ,CLEAR(num,n));
      printf( "the getting the nth bit is %d\n" ,GET(num,n));
}

