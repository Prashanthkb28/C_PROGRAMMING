/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description: to get n bits from the lsb of  number
sample InputEnter the number: 10

Enter number of bits: 3

Result = 2Sample Output:
*/

#include <stdio.h>

int get_nbits(int, int);            // function declaration
int get_nbits(int num, int n)       // function definition
{
    return num & ((1<<n)-1);        // return the upadted value to caller
}                                    // mask=(1<<n )-1

int main()
{
    int num, n, res = 0;
    
    printf("Enter num and n:");
    scanf("%d%d", &num, &n);
    
    res = get_nbits(num, n);         // function call
    
    printf("Result = %d\n", res);
}
