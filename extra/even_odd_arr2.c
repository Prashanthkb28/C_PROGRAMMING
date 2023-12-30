#include<stdio.h>
int main()
{

   int size,j=0,k=0;
  printf("Enter the size of array:");
  scanf("%d",&size);
  int arr[size],arr2[size],arr3[size];
  printf("enter the array elements:");
  for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
  for(int i=0;i<size;i++)
  {
      if(arr[i]!=0)
      {
   if(arr[i]%2==0)
       arr2[j++]=arr[i];
   else
          arr3[k++]=arr[i];
      }
   }
  printf("The even elements :");
  for(int i=0;i<j;i++)
      printf("%d ",arr2[i]);

  printf("\nThe odd elements :");
  for(int i=0;i<k;i++){
      printf("%d ",arr3[i]);
  }  
  for(int i=0;i<size;i++){
      if(arr[i]==0)
      printf("\n0 is neither odd or even\n");
  }  
   return 0;
   }



