/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
float average_array(int * ,int);
float average_array(int arr[],int n)
{
    int sum;
    float avg=0;
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    avg=(float)sum/n;
    return avg;
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
    
    printf("Average is %g",average_array(arr,size));
    return 0;
    
}
