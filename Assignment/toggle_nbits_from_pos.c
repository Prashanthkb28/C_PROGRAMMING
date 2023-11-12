/* Documentation
Name:Prashanth KB
description: WAP to toggle the n bits from agiven position of a given number
sample execution: 
                Enter the number: 10
                Enter number of bits: 3
                Enter the pos: 5
                Result = 50
*/

#include <stdio.h>

int toggle_nbits_from_pos(int, int, int);
int toggle_nbits_from_pos(int num, int n, int pos)
{
    return num ^ ( ((1 << n) -1) << (pos -n + 1) );
} 
int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = toggle_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
}
