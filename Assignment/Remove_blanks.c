/* Documentation
Name: PRASHANTH KB
Date: 10/10/2023
Description:    WAP to replace each string of one or more blanks by a single blank
sample Input:  Enter the string with more spaces in between two words
               Pointers     are               sharp     knives.
Sample Output: Pointers are sharp knives.

*/

#include <stdio.h>

void replace_blank(char []);                                             // function prototype

int main()                                                               // main function
{
    char str[80];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);                                                // read string untill newline 
    
    replace_blank(str);                                                  // call the function
    
    printf("%s\n", str);
}
void replace_blank( char str[])                                          // function definition
{
    int i=0,j;
    for(i=0; str[i] != '\0';i++)                                         // run aloop untill null character
    {
         if(str[i]=='\t')                                                // if the tab is found replace by space
           str[i]=' ';
        while(str[i] ==' ' && str[i+1]==' ')                             // check the previous and next char also space or not
        {
            for(j=i;str[j]!='\0';j++)                                   // run aloop untill newline
            {
                str[j]=str[j+1];                                         // move the char of string
            }
        }
    }
}

