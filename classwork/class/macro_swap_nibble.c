/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description:to swap the nibble of a byte using macro
sample Input:
Sample Output:
*/

#include<stdio.h>
#define SWAP_NIBBLE(x)  (x&0x0F)<<4|(x&0xF0)>>4 
int main()
{
    unsigned int num;
    unsigned int nibble;
    printf("Enter the hexa-decimal number:");
    scanf("%X",&num);
    nibble=SWAP_NIBBLE(num);
    printf("After swap nibble :%X",nibble);
}
