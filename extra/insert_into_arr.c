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
 int loc=-1;
 int size,ele,pos;
 printf("ENter the size of array:");
 scanf("%d",&size);
 int arr[size];
 printf("Enter the %d elements into array: ",size);
 for(int i=0;i<size;i++)
     scanf("%d",&arr[i]);
 printf("Enter the element to insert: ");
 scanf("%d",&ele);
 printf("Enter the position to insert: ");
 scanf("%d",&pos);
 if ( pos > size)
 {
     printf("out of array limits!!!!\n");
 }
 else
 {
 for(int i=size-1;i>=(pos-1);i--)       // i>=pos
 {
     arr[i+1]=arr[i]; // shifting the array elements 
 }
  arr[pos-1]=ele;   // [pos]
  size=size+1;
}

 printf(" the array elements are : ");
 for(int i=0;i<size;i++)
     printf("%d ",arr[i]);
 
    return 0;
}
/* can also use this
   size=size+1;
   loop ///
   arr[i]-arr[i-1]
   end of for loop
   arr[pos-1]=ele;
   */
