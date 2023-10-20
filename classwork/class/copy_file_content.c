/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *src_fptr,*dest_fptr;
    char ch;
    src_fptr=fopen("text.txt","r");
    if(src_fptr==NULL)
    {
        printf("Source file cannot open\n");
        return 1;
    }
    dest_fptr=fopen("copy_text.txt","w");
    if(dest_fptr==NULL)
    {
        printf("destination file cannot open\n");
        return 1;
    }
    while(ch=getc(src_fptr)!=EOF)
    {
        fputc(ch,dest_fptr);
    }
    fclose(src_fptr);
    fclose(dest_fptr);
    
    return 0;
}
