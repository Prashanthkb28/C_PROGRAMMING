/* Documentation
Name:Prashanth KB
description: WAP to get n bits from a given positon from a number 
sample execution:
Enter the number: 12
Enter number of bits: 3
Enter the pos: 4
Result = 3
*/
#include <stdio.h>

int get_nbits_from_pos(int, int, int);                               // function prototype

int get_nbits_from_pos(int num, int n, int pos)                      // function definition
{
    return ( num & ((1 <<n ) - 1) << (pos-n+1) ) >> (pos-n+1);        // get the n bits from position (num&((1<<n)-1 << pos-n+1) and right shift the result and return
}

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);         // n--->no of bits ,pos-->position
    
    res = get_nbits_from_pos(num, n, pos);                            // function call
    
    printf("Result = %d\n", res);                                     // print the decimal value after getting n bits
}
