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
 int size,ele;
 printf("ENter the size of array:");
 scanf("%d",&size);
 int arr[size];
 printf("Enter the %d elements into array: ",size);
 for(int i=0;i<size;i++)
     scanf("%d",&arr[i]);
 printf("Enter the element to search: ");
 scanf("%d",&ele);
 for(int i=0;i<size;i++)
 {
     if(ele==arr[i])
         loc=i;
 }
 if(loc > 0)
     printf("The element is found at index %d,ele=%d\n",loc,arr[loc]);
 else
     printf("The element can't found\n");

 
    return 0;
}

