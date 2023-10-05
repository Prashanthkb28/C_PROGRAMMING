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
    int rows,col;
    printf("Enter the row size:");
    scanf("%d",&rows);
    printf("Enter the column size:");
    scanf("%d",&col);
    int arr[rows][col];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        scanf("%d",&arr[i][j]);
    }
    int min=arr[0][0],max=arr[0][0],i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j] > max)
            max=arr[i][j];
            
            if(arr[i][j]< min)
            min=arr[i][j];
        }
    }
    printf("The min is %d\n",min);
    printf("Max is %d\n",max);
}
