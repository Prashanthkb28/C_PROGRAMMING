#include<stdio.h>
int main()
{

   int size,j,count=0;
  printf("Enter the size of array:");
  scanf("%d",&size);
  int arr[size],arr2[size],arr3[size];
  printf("enter the array elements:");
  for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
  for(int i=0;i<size;i++)
  {
      for(j=i+1;j<size;i++)
      {
          if(arr[i]==arr[j])
              count++;
              break;
      }
  }
      printf("the total number of duplicate elements  found are:%d\n",count);
    
   return 0;
   }

