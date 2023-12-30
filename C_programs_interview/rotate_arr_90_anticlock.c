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
    int row,col;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("ENTER the 2d elements :");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j] );
        }
    }
    printf(" the array elemnts are  bEfore: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j] );
        }
        printf("\n");
    }
    // logic
    // find the  transpose of the matrix matrix 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i;j++)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    // reverse each row of the matrix
    for(int i=0;i<col;i++)
    {
        int left=0;  // first ele of row
        int right = row-1;  // last ele of row
        while(left < right)
        {
            int temp = arr[left][i];
            arr[left][i]= arr[right][i];
            arr[right][i]=temp;

            left++;
            right--;
        }
    }

    printf(" the array elemnts are : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j] );
        }
        printf("\n");
    }
 
    return 0;
}

