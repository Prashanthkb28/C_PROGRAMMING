/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include <stdio.h>
int square(int arr[], int size);
int square(int arr[], int size)
{
    printf("Square is ");
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]*arr[i]);
    
}

int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    square(arr, size);
    return 0;
}
