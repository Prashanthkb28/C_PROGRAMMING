/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
#if 1
int  equlibrium(int arr[] , int size)
{
    int left_sum=0,sum=0;
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }

     for(int i=0;i<size;i++)
      {
           sum= sum - arr[i];
           if( left_sum == sum)
               return i;
           left_sum=left_sum+arr[i];
    }
    return -1;
}
#endif
int main()
{
    int size;
    printf("Enter the size ; ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array ele : ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("The quilibrium index of array is  :%d",equlibrium(arr,size) );
 
 
    return 0;
}

