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
    printf("Enter the number of rows and cols :");
    scanf("%d %d",&row ,&col);
    int arr[row][col];
    printf("enter the elements into an array:");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf(" the elements of array are :");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++);
    {
        for(int j=0;j<col;j++)
        {
            arr[i][j]=arr[j][i];
        }
    }

    printf(" the elements of array are :");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
  


 
 
    return 0;
}

