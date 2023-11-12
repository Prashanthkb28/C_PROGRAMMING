/* Documentation
Name: PRASHANTH KB
Date: 29/08/2023
Description: WAP to print thenumbers in X format
sample input:Enter the number:5
sample output:
1   5
 2 4 
  3  
 2 4 
1   5

*/

#include<stdio.h>                                  // including header file for standard i/p o/p function
int main()                                         // start of program
{
    int num;                                       // declare a integer variable
    printf("Enter the number:");                   // prompt the user to enter a +ve integer number
    scanf("%d",&num);                              // read the number from user
    for(int row=1;row<=num;row++)                        // run a lopp untill num times to keep track of rows
    { 
         for(int col=1;col<=num;col++)                  // run a loop untill num times to keep track of columns
        {
            if( (row==col) || (row+col == num+1) )         // conditon to print the numbers if row and col is equal and row+col=num+1
                printf("%d",col);                    // print the number
            else
                printf(" ");                       // else print the spaces
        }
        printf("\n");                              // print a new line
    }
    return 0;                                      // return 0 from main function for sucessful compliation
}                                                   // end of main function
