/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description: to find the occurance of a char c in the file
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    char ch;
    int count=0;
    FILE *fptr;
    fptr=fopen("text.txt","r");
    if(fptr==NULL)
    {
        printf("File cannot open\n");
        return 1;
    }
    while(ch=fgetc(fptr)!=EOF)
    {
        if(ch=='c')
        {
            count++;
            printf("character c found at %ld\n",ftell(fptr));
        }
    }
    fclose(fptr);
    printf("The occurance of c is %d",count);
    return 0;
}
