/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int comapre_strings( char *,char *);

int comapre_strings( char *str1,char *str2)
{
    while(*str1!='\0' && *str2 !='\0')
    {
        if(*str1!=*str2)
        return 0;
        str1++;
        str2++;
    }
    return (*str1=='\0' && *str2=='\0');
}
int main()
{
    char str1[100],str2[100];
    int i;
    //printf("Enter the string1:");
    fgets(str1,100,stdin);
   // printf("Enter the string2:");
    fgets(str2,100,stdin);
    if(comapre_strings(str1,str2))
    {
      printf("Entered Strings are equal");
    }
    else
     printf("Entered Strings are not equal");

    
    
}

