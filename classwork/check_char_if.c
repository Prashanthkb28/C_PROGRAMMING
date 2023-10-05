#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    printf("The Character is Upper Case\n");
    else if (ch>='a' && ch<='z')
    printf("The Character is lower Case\n");
    else if (ch>='0' && ch<='9')
    printf("The Character is Digit\n");
    else
    printf("The Character not an alphabet or digit\n");
    return 0;
}
