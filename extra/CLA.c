/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int sum=0;
    printf("The clas are: ");
    for(int i=0;i<argc;i++)
        printf("%s ",argv[i]);
    printf("\n");
    if(argc > 2)
    {
        for(int i=1;i<argc;i++)
        {
        sum=sum+atoi(argv[i]);
         }
         printf("The sum of cla is %d :",sum);
      }
      else
      printf("Provide enough arguments\n");

 
 
    return 0;
}

