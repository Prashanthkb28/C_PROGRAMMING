/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description: to swap the nibbles using structure bitfileds
sample Input:
Sample Output:
*/

struct nibble
{
    unsigned int lower : 4;
    unsigned int upper : 4;
};
#include<stdio.h>
int main()
{
    struct nibble n;
    unsigned int ch;
    printf("Enter the hexa-decimal value: ");
    scanf("%X",&ch);
    n.lower=ch;
    ch=((ch & 0X0F)<<4)|((ch & 0XF0)>>4);
    n.upper=ch;
    
    printf("After swap nibble : ");
    printf("%X%X",n.lower,n.upper);
}
