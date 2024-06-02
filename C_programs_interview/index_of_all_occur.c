/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<string.h>
void printindex(const char *str, const char *s)
{
    int len1 = strlen(str);
    int len2 = strlen(s);
    int i,j,flag =0;
    for(i=0;i<=len1-len2;i++)
    {
        for( j=0;j<len2;j++)
        {
            if(str[i+j] != str[j])
                break;
        }

        if(j==len2)
        {
            printf("%d ",i);
            flag=1;
        }
    }
    if(flag ==0)
        printf("NONE \n");
}
int main()
{

  /*const char  *str1="helloworldhello";
  const char *str2="hello";
  */
    char str1[20],str2[20];
    printf("Enter the string : ");
    scanf("%s",str1);
    printf("Enter the substring :");
    scanf("%s",str2);
  printindex(str1,str2);
 
    return 0;
}

