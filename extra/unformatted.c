/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
 
    char ch;
    char ch2;
    printf("Enter the char:");
    ch=getchar();
    if(ch==EOF)
        printf("End of line");
    else
        putchar(ch);
    printf("\n");
 
    printf("Enter the char:");
    while(ch2!= '\n')
    {
        ch2=getchar(); 
        putchar(ch2); 
    
    }

    return 0;
}

