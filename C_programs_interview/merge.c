/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size1,size2,size;
    int *arr1, *arr2,*ptr;
    printf("Enter the array 1 size : ");
    scanf("%d",&size1);
    arr1= malloc(sizeof(int) *size1);
    if( arr1== NULL)
    {
        printf("arr1 ..Cannot allocate memory....!");
        return 0;
    }
    printf("Enter the elem of array 1 :");
    for(int i=0;i<size1;i++)
        scanf("%d",&arr1[i]);


    printf("Enter the array 2 size : ");
    scanf("%d",&size2);
    arr2= malloc(sizeof(int) *size2);
    if( arr2== NULL)
    {
        printf("arr2 ..Cannot allocate memory....!");
        return 0;
    }

    printf("Enter the elem of array2 :");
    for(int i=0;i<size2;i++)
        scanf("%d",&arr2[i]);
    size = size1+size2;
    ptr = malloc( sizeof(int) *size);
    if(ptr == NULL)
    {
        printf("CANNOT ALLOCATE MEMORY ");
        return 0;
    }
    for(int i=0;i<size1;i++)
    {
        *(ptr+i)=*(arr1+i);
    }
    for(int i=0;i<size2;i++)
    {
        *(ptr+size1+i)=*(arr2+i);
    }
    printf(" The merged array is : ");
    for(int i=0;i<size;i++)
        printf("%d ",ptr[i]);

   printf("\n");
   free(ptr);
   free(arr2);
   free(arr1);
    return 0;
}

