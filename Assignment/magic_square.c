/* Documentation-------------------------------------------------------------------------------------------------------
Name: PRASHANTH KB
Date: 29/10/2023
Description:WAP to generate a n*n magic square
In recreational mathematics, a magic square is an arrangement of distinct numbers (i.e. each number is used once), usually integers, in a square grid, where the numbers in each row, and in each column, and the numbers in the main and secondary diagonals, all add up to the same number
A magic square has the same number of rows as it has columns, and in conventional math notation, "n" stands for the number of rows (and columns) it has. Thus, a magic square always contains n2 numbers, and its size (the number of rows [and columns] it has) is described as being "of order n".
Read an odd number n from user.
Do error checking.
Check the number is odd or not.
If not, continue step a.
Create an n X n matrix.
Insert 1 to (n * n) numbers into matrix.
Arrange the numbers in such a way that, adding the numbers in any direction, either row wise column wise or diagonal wise, should result in same answer.
Allocate the memory dynamically using calloc.
sample execution :Enter a number: 3
                   8      1      6
                   3      5      7
                   4      9      2

Test Case 2:
Enter a number: 6
Error : Please enter only positive values
---------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include<stdlib.h>                                    //-->dynamic memory allocation function-->

void magic_square(int **, int);                       // function prototype to find the magic square

int main()
{
    int n ;
    int **arr;
    printf("Enter a number: ");                                     // read the order of matrix-n from user
    scanf("%d",&n);
    if( n < 0 || (n%2) == 0 )                                       // validating for user entered n is positive and odd
    {
       
           printf("Error : Please enter only positive  values\n");  //if n is negative and even then print error message
           return 0;
    }
  
        arr = calloc( n,sizeof(int *) );               // dynamic memory allocation for rows
        for(int i=0;i<n;i++)
        {
            arr[i] = calloc( n,sizeof(int));             // dynamic allocationn of memory for columns
        }
        if(arr == NULL)
            printf("Cannot allocate the memory.....!\n");  // validating successful of calloc function
        for(int i=0;i<n;i++)
        {
            if(arr[i] == NULL)
                printf("Cannot allcoate the memory....!\n");
        
        }
   
        magic_square(arr,n);                           // function call

        for(int i=0;i<n;i++)
        {
            free(arr[i]);                               // --> free the allocating memory
        }
        free(arr);                                    // free the pointer
    
    return 0;
}
void magic_square(int **arr,int n)
{
    int row, col, i;
    row=0;
    col = (n/2);                                       // middle column
   for(i=1; i<=(n*n) ;i++)
   {
      arr[row][col]=i;
      row--;                                        // move up
      col++;                                        // move right
       if( (i%n) == 0 )
       {
          row = row + 2;                               // move to bottom row from topmost row
          col--;                                   // move to the same coumn
       }
       if( row < 0 )                                // if there is NO more rows to move up
       {
         row = n-1;                                   // move to bottom row
       }
      if( col == n )                                  // if there is NO more column to move right
       {
         col = 0;                                    // move to left most column
       }
   }
    for(int i = 0; i < n; i++)                          // print the magic square matrix
    {
        for(int j=0; j<n; j++)
        {
            printf("%4d ",arr[i][j]);
        }
        printf("\n");                             // print the new line
    }
}

