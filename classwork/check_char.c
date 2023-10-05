#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A' ... 'Z' : printf("The character is Upper Case\n");
                            break;
        case 'a' ... 'z' : printf("The Character is lower Case\n");
                           break;
        case '0' ... '9' : printf("The Character is digit\n");
                         break;
        default:printf("The character not an alphabet or digit\n");
    }
    return 0;
}
