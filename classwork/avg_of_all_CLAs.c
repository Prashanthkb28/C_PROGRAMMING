/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    float sum=0;
    float avg=0;
    if(argc>2)
    {
        for(int i=1;i<argc;i++)
        {
        sum=sum+atoi(argv[i]);
        }
        avg=sum/(argc-1);
        printf("Average is %g",avg);
    }
    else
    printf("pass atleast 2 arguments");
}
