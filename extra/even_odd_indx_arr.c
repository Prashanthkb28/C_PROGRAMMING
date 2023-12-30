/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{

   int size;
  printf("Enter the size of array:");
  scanf("%d",&size);
  int arr[size];
  printf("enter the array elements:");
  for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
  printf("The even index numbers in an array are:");
  for(int i=0;i<size;i++)
  {
   if(i%2==0)
   printf("%d ",arr[i]);
  }
  printf("\nThe odd index numbers in an array are:");
  for(int i=0;i<size;i++){
      if(i%2!=0)
   printf("%d ",arr[i]);
   }
   return 0;
   }


 



 


