/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
void move_zeros(int arr[] ,int n);
int main()
{

   int size;
  printf("Enter tge sie of the array : ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements of the array : ");
  for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
  printf(" \nthe elements of the array are before: \n");
  for(int i=0;i<size;i++)
      printf("%d ",arr[i]);
     move_zeros(arr,size);
    return 0;
}
void move_zeros(int arr[] , int size)
{
    int count=size;
    for(int i=size;i>0;i--)
    {
        if( arr[i] != 0)
        {
          arr[count]=arr[i];
          count--;
        }
    }
    printf("\ncount =%d \n",count);
    for(int i=count;i>0;i--)
    {
        arr[count]=0;
        count--;
    }
    printf("\nThe array after moving zeros to end :\n ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}

