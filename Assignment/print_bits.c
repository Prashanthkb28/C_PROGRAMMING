/* Documentation
Name:Prashanth KB
description: WAP to print the n bits from lsb of agiven number
sample execution:   Enter the number: 10
                    Enter number of bits: 12
                    Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
*/

#include <stdio.h>

int print_bits(int, int);                    // function declaration

int main()                                   // main function
{
    int num, n;
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);                 // read the number and number of bits
    
    printf("Binary form of %d:", num);
    print_bits(num, n);                     // calling the function
 }
 
int print_bits(int num, int n)              // function definition
{
    for(int i= n-1; i >= 0; i--)            // run a loop to get n bits from lsb
    {
        if( num & (1 << i))                 // check for bit is set or not
        printf("1 ");                       // if bit is set print 1 else print 0
        else
        printf("0 ");
    }
}

