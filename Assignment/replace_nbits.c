/* document
Name:Prashanth KB
DAte:07/09/2023
Description: To replace n bits of the given number by n bits of other number
*/
#include <stdio.h>

int replace_nbits(int, int, int);                         //function declaration
int replace_nbits(int num, int n, int val)                // function definition
{
    return  num=num& ~((1<<n)-1) | val & ((1<<n)-1);       // logic implemented by mask
}
int main()
{
    int num, n, val, res = 0; 
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);
    
    res = replace_nbits(num, n, val);                       // function call
    
    printf("Result = %d\n", res);
}
