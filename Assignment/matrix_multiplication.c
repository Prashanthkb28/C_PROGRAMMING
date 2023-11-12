/* Documentation-------------------------------------------------------------------------------------------------
Name: PRASHANTH KB
Date: 28/10/2023
Description:  Read no.of rows and columns for 2 arrays from user and allocate the memory dynamically using malloc or calloc (Assume Matrix A and Matrix B).Read the Matrix A and B from user.Find the product for matrix A with matrix B amd store the result in Matrix R.
sample Execution:
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :

1      1     1
2      2     2
3      3     3
Product of two matrix :
14      14      14
14      14      14
14      14      14
 -----------------------------------------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>

int matrix_mul(int **, int, int, int **, int, int, int **, int, int);                // function prototype

int main()
{
    int **mat_a, **mat_b, **result;                                                  // double pointer declaration
    int row_a, col_a, row_b, col_b, row_r, col_r, i, j;

    // enter the no of rows and columns for matrix A
    printf("Enter number of rows : ");
    scanf("%d",&row_a);
    printf("Enter number of columns : ");
    scanf("%d",&col_a);
    // dynamic memory allocation for martix A rows
    mat_a = malloc(row_a * sizeof(int *));
    if( mat_a == NULL )                                                         // validating for fail of malloc()
    {
       printf("Failed to allocate memory...!\n");
    }
    // dynmaic memory allocation for Matrix A columns
    for(i = 0; i < row_a; i++)
    {
        mat_a[i] = malloc(col_a * sizeof(int));
        if( mat_a[i] == NULL )                                                // validating for fail of malloc()
        {
            printf("Falied to allocate memory...!\n");
        }
    }
    // read the Matrix A from user
    printf("Enter values for %d x %d matrix : \n",row_a,col_a);
    for(i = 0; i < row_a; i++)
    {
        for(j = 0; j < col_a; j++)
        {
            scanf("%d",&mat_a[i][j]);
        }
    }
    // Read the no of rows and columns of Matrix A
    printf("Enter number of rows : ");
    scanf("%d",&row_b);
    printf("Enter number of columns : ");
    scanf("%d",&col_b);
    //dynamic memory allocation of Matrix B rows
    mat_b = malloc( row_b * sizeof(int *) );
    if(mat_b == NULL)                                                      // error validating for malloc() fail
    {
       printf("Failed to allocate memory...!\n");
    }
    //Dynamic memory allocation for Martix B columns
    for(i = 0; i < row_b; i++)
    {
        mat_b[i] = malloc( col_b * sizeof(int) );
        if( mat_b[i] == NULL )
        {
            printf("Falied to allocate memory...!\n");
        }
    }
    // Read the matrix B values from user
    printf("Enter values for %d x %d matrix : \n",row_b,col_b);
    for(i = 0; i < row_b; i++)
    {
        for(j = 0; j < col_b; j++)
        {
            scanf("%d",&mat_b[i][j]);
        }
    }
    if(col_a == row_b)                                          // validating for matrix mltiplication
    {
        row_r = row_a;                                          // the resultant matrix row should be equal to matrix A row
        col_r = col_b;                                          // the resultant matrix col should be equal to matrix B col

        result = malloc( row_r * sizeof(int *) );             // dynamic mem allocation
        if(result == NULL)
        {
            printf("Failed to allocate Memory..!\n");
        }
        for(i = 0; i < row_r; i++)
        {
            result[i] = malloc( col_r * sizeof(int) );
            if(result[i] == NULL)
            {
                printf("Failed to allocate memory...!\n");
            }
        }
        // matrix multiplication function call
     matrix_mul(mat_a, row_a, col_a, mat_b, row_b, col_b, result, row_r, col_r);
     // free the dynamically allocated memory
      for(i = 0; i < row_r; i++)
      {
          free(result[i]);
      }
      free(result);
    }
    else{                                                       // error message cannot perform matrix multiplication
    printf("Matrix multiplication is not possible\n");
    }
    // free the dynamic alloacted memory for MAtrix A and B
     for(i=0; i < row_a; i++)
      {
          free(mat_a[i]);
      }
      free(mat_a);
       for(i=0; i < row_b; i++)
      {
          free(mat_b[i]);
      }
      free(mat_b);
    return 0;
}

int matrix_mul(int **mat_a,int row_a,int col_a,int **mat_b,int row_b, int col_b,int **result,int row_r,int col_r)
{
    for(int i = 0; i < row_a; i++)                   
    {
        for(int j = 0; j < col_b; j++)
        {
            result[i][j] = 0;
            for(int k = 0 ; k < col_a; k++)
            {
                result[i][j] = result[i][j] + ( mat_a[i][k] * mat_b[k][j] );    // perform the matrix multiplication
            }
        }
    }
    // print the resultant matrix
    printf("Product of two matrix : \n");
    for(int i = 0; i < row_r; i++)
    {
        for(int j = 0; j < col_r; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}

