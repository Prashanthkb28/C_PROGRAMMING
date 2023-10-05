/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int my_strncmp(char *,char *,int );
int main()
{
    char str1[50],str2[50];
    int ret,n;
   // printf("Enter the string 1: ");
    scanf("%s",str1);
   // printf("Enter the string 2: ");
    scanf("%s",str2);
   // printf("Enter the value of n: ");
    scanf("%d",&n);
    ret=my_strncmp(str1,str2,n);
    if(ret==0)
    printf("str1 is equal to str2.\n");
    else if(ret<0)
    printf("str1 is less than str2.\n");
    else 
    printf("str2 is less than str1\n");
}
int my_strncmp(char str1[],char str2[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(str1[i]!=str2[i])
        {
            if(str1[i]< str2[i])
            return -1;
            else
            return 1;
        }
        
    }
    return 0;
}
