/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    unsigned int num; 
    unsigned int nibble;
    //printf("Enter the hexa decimal value:");
    scanf("%X",&num);
    nibble=((num & 0x0F)<<4) | ((num & 0xF0)>>4);
    printf("After swap:%X",nibble);
    return 0;
}
