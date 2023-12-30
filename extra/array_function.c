/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
void scan_array(int *,int);
void print_array(int *,int);
int main()
{
    int size=10;
  int arr[size];
  scan_array(arr,size);
  print_array(arr,size);
return 0;
}
void scan_array(int *arr,int size)
{
    for(int i=0;i<size;i++)
        scanf("%d",arr+i);
}
void print_array(int a[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",*(a+i));
}


