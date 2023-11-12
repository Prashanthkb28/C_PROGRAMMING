/* Documentation------------------------------------------------------------
Name: PRASHANTH KB
Date: 30/10/2023
Description:WAP to implement fragments using array of pointers

sample Input:
Enter the number of row :3
Enter number of columns in row [0] :4
Enter number of columns in row [1] :3
Enter number of columns in row [2] :5
Enter 4 value of row [0]:1 2 3 4
Enter 3 value of row [1]:2 5 9
Enter 5 value of row [2]:1 3 2 4 1
Sample Output :
Before sorting output is:
1.000000 2.000000 3.000000 4.000000 2.500000 
2.000000 5.000000 9.000000 5.333333 
1.000000 3.000000 2.000000 4.000000 1.000000 2.200000 
After sorting output is:
1.000000 3.000000 2.000000 4.000000 1.000000 2.200000 
1.000000 2.000000 3.000000 4.000000 2.500000 
2.000000 5.000000 9.000000 5.333333 
-----------------------------------------------------------------------------*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row, i , j;
    printf("Enter the number of row :");
    scanf("%d",&row);
    float *arr[row];                                         // array of pointers
    int col[row];                                           // to store the number of columns in each row
    for(i=0; i<row; i++)
    {
        printf("Enter number of columns in row [%d] :",i);     // enter the number of columns in each row
        scanf("%d",&col[i]);
        arr[i] = (float *)malloc(col[i] + 1 *sizeof(float) );      // dynamic memory allocation
    }
    for(i=0; i<row; i++)
    {
        float sum = 0,avg = 0;
        printf("Enter %d value of row [%d]:",col[i],i);         // enter the values in each row of column size
        for(j=0; j<col[i]; j++)
        {
            scanf("%f",&arr[i][j]);                              
            sum = sum + arr[i][j];                                  //calculate the sum of the elements of each row
        }
        avg = sum/col[i];                                           // calculate the average of row elements
        arr[i][(col[i])] = avg;                                    // store at the last element of each row
    }
    printf("Before sorting output is:\n");                      // print the array elements before sorting
    for(i=0; i<row; i++)
    {
        for(j=0; j<col[i]+1 ;j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)                                       // bubble sort base on the average value
    {
        for(j=0; j<row-1; j++)
        {
            if(arr[j][col[j]] > arr[j+1][col[j+1]])
            {
                float *temp1 = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp1;
                                                           // swap the array elements and also base on average swap the entire row
                int temp2 = col[j];
                col[j] = col[j+1];
                col[j+1] = temp2;
            }
        }
    }
    printf("After sorting output is:\n");                // print after sorting
    for(i=0; i<row; i++)
    {
        for(j=0; j<col[i]+1 ;j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }

// free the dynamically allocated memory
    for(i=0; i<row; i++)
    {
        free(arr[i]);
    }
 
    return 0;
}

