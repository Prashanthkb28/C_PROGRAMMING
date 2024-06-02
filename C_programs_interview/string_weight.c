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
    int weight=0;
    printf("ENter the string : ");
    scanf("%[^\n]",str);
    for(int i=0;i< str[i]!='\0';i++)
    {
        weight= weight+str[i];
    }
    printf("The string weight is : %d",weight);
 
 
    return 0;
}

