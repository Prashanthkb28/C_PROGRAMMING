/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int check_even_odd(int);      // function declaration
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(check_even_odd(num))     // calling func inside if condition
    printf("TRUE");
    else
    printf("FALSE");
    return 0;
    
}
int check_even_odd(int num)    // function definition
{
    if( num % 2 == 0)
        return 1;
    else
     return 0;
        
}
