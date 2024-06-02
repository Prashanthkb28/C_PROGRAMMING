/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/
#include<string.h>
#include<stdio.h>
char * my_strstr(char *str,char *substr)
{
    char *ext=strstr(str,substr);
    if(ext !=NULL)
    {
        printf("extracted :%s\n",substr);
    }
    else
        printf("not extaracted\n");
    if(*substr=='\0')
        return str;
    while(*str)
    {
        char * begin=str;
        char * pattern =substr;
        while(*begin && *pattern && (*begin == *pattern) )

          {
              begin++;
              pattern++;
          }
        if(*pattern == '\0')
            return str;
        str++; 
    }

    return NULL;


}


int main()
{
  char str[20],substr[20];
 printf("enter main str :");
 scanf("%[^\n]",str);
 printf("enter substr :");
 scanf("%s",substr);
 char *result = my_strstr(str,substr);
 if(result != NULL)
 {
     printf("SUbstring found :%s\n",result);
 }
 else
     printf("Not found\n");

 printf("%s\n",str);

    return 0;
}

