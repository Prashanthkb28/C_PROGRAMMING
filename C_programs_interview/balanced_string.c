/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int isbalanced(char str[])
{
    int balance =0;
    while(*str != '\0')
    {
        if( *str == '(' || *str == '{' || *str == '[')
        {
            balance++;
        }
        else if( *str == ')' || *str == '}' || *str == ']')
        {
            balance--;
        
            if( balance < 0)
            {
                return 0;
            }
        }
        str++;
    }
    // return 1 for balanced string else return 0
    return (balance == 0) ? 1: 0;
}

int main()
{
    char str[50];
    printf("ENter the string  : ");
    scanf("%s",str);
    if (isbalanced(str))
    {
        printf("Balanced string \n");
    }
    else
        printf(" NOT balanced string\n");
 
 
    return 0;
}

