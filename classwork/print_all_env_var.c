/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main( int argc,char *argv[],char *envp[])
{
    int i=0;
    while(envp[i] != NULL)
    {
        printf("%s\n",envp[i]);
        i++;
    }
}
