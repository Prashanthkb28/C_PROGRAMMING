/* Documentation
Name: PRASHANTH KB
Date: 01/09/2023
Description:WAP to print triangle pattern 
sample Input: Read the number:4
Sample Output:
1 2 3 4 
5  6  
7 8   
9 

*/

#include<stdio.h>                                             // include standard i/p o/p header file
int main()                                                    // start of main function
{
    int num,count=0;                                          // declare the required variables and intialize
    printf("Read the number:");                                //prompt the user to enter a number
    scanf("%d",&num);                                          // read a number
    for(int row=1;row<=num;row++)                              // run a loop to keep track of row
    {
        for(int col=1;col<=num;col++)                           // run a loop to keep track of column 
        {
            if(row ==1 || row+col == num+1 || col==1)           // condition to print the value
            {
                count++;                                         // increment the count to print the incremnt value
                printf("%d ",count);                             // print the value
            }
            else
                printf(" ");                                     // for other cases print the spaces
        }
        printf("\n");                                             // print the new line
    }
    return 0;                                                    // end of the program execution
}
