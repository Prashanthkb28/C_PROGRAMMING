/* Documentation
Name: PRASHANTH KB
Date: 02/09/2023
Description: WAP to print the given  pattern 
Sample input:Enter the number: 4
Sample output:
4
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4

*/

#include<stdio.h>                                 // include header file for standard i/p o/p
int main()                                    
{
    int num,i,j,k;
    printf("enter the number:");
    scanf("%d",&num);                            // read a number from user
    for( i=0;i<(2*num-1);i++)                    // run a loop upto 2*number -1
    {
        if(i<num)                                  // if row number is less than 4
        {
            for(j=(num-i);j<=num;j++)            // strt from less than number and print till number value
                printf("%d ",j);                // print the value
        }
        else
        {                                       // if row value > number
            for( k=(i-num)+2;k<=num;k++)        // print the lower pattern
                printf("%d ",k);
        }
        printf("\n");                           // to get new line
    }
    return 0;
}

