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
    int n;
    //printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    //printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int large=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        large=arr[i];
    }
    printf("Largest element is : %d",large);
    return 0;
}
