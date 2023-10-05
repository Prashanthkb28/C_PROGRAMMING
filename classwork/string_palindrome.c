/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    char str[20];
    //printf("Enter the string:");
    scanf("%s",str);
    int len=0,flag=0;
    while(str[len]!='\0')
    len++;
    int i =0;
    while(str[i]!='\0')
    {
       if(str[i]!=str[len-i-1])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag)
    printf("No, Entered string is not palindrome.\n");
    else
    printf("Yes, Entered string is palindrome.\n");
    
}
