/* Documentation
Name:Prashanth KB
date:14/09/2023
description: Read number num from user.Read number val from userRead number a from user.Read number b from user(a <= b <=31)Do error checking
Check b is within limit or not.Call replace_nbits_from_pos function by passing val, b - a + 1, b and n as arguments.replace_nbits_from_pos(num, a, b, val);
Print the new value of i.
sample execution:
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174
Result : 158
*/
#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);     // decration of function

int replace_nbits_from_pos(int num, int a, int b, int val)                       // define the function
{
    int n = b - a + 1;                                                       // calculating no of bits
 return ( val & ( ~( ( (1 <<n ) - 1) <<n)) ) | ( num & ((1 << n)-1) ) <<n;   // logic to replace and return the result to caller 
}
int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);
    
    res = replace_nbits_from_pos(num, a, b, val);                           // function call
    
    printf("Result = %d\n", res);
}
/* the logic of the function
1.find the no of bits from the formula n=b-a+1
2.clear n bits from the position (b) of value val & ~((1<<n)-1)
3.fetch the n bits from the lsb end of the given number num & ((1<<n)-1)
4.replace those a bits from the b position of value so shift the fetched bits and then merge ( val & ( ~( ( (1 <<n ) - 1) <<n)) ) | ( num & ((1 << n)-1) ) <<n;
*/

