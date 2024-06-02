/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
void rev(const char *s)
{
    if(*s)
        rev(s+1);
    putchar(*s);
}
int main()
{
   rev("hello world");
 
 
    return 0;
}

