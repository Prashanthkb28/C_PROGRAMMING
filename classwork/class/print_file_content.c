/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description: to print the file content
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fptr;
    fptr=fopen("text.txt","r");
    if(fptr==NULL)
    {
        printf("Cannot open a file\n");
        return 1;
    }
    while(ch=getc(fptr)!=EOF)
    {
        putchar(ch);
    }
    fclose(fptr);
    return 0;
}

