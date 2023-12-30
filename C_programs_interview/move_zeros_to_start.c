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
    int size;
    printf("Enter te size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("ENter the array elements :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    // logic to implement
    int nz=size-1 , z=size-1;
    while( nz >= 0)
    {
        if( arr[nz] != 0)
        {
           
            arr[z] = arr[nz];
            if( z != nz)
            {
              arr[nz] = 0;
            }
            z--;
        }
        
     
            nz--;
   
    }
    printf("The elements of array are : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
 
 
    return 0;
}
