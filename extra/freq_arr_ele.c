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

   int size,ele,freq_count=0;
  printf("Enter the size of array:");
  scanf("%d",&size);
  int arr[size];
  printf("enter the array elements:");
  for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
  printf("Enter the element to find the frequency:");
  scanf("%d",&ele);
  for(int i=0;i<size;i++)
  {
   if(ele==arr[i])
    freq_count++;
  }
  if(freq_count)
  printf("\nThe element %d has repeated %d times",ele,freq_count);
  else
   printf("The element %d is not found",ele);
   
   return 0;
   }


 



 


