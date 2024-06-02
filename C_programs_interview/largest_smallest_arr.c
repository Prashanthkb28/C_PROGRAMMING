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
int largest=arr[0], smallest=arr[0];
  printf("The largest number in an array are:");
  for(int i=0;i<size;i++)
  {
   if(arr[i]>largest)
       largest=arr[i];
  }
   printf("%d ",largest);
 
  printf("\nThe smallest number in an array are:");
  for(int i=0;i<size;i++){
      if(arr[i]<smallest)
          smallest=arr[i];
  }
   printf("%d ",smallest);
   
   return 0;
   }


 



 


