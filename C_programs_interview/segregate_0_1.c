/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description:
// first case program
Enter the size of the array : 6
ENyer the the array : 1 0 1 0 1 0
The elements of array are : 0 0 0 1 1 1 
// second case program
Enter the size of the array : 6
ENyer the the array : 1 0 1 0 1 0
The elements of array are : 1 1 1 0 0 0 
sample Input:
Sample Output:
*/
#if 0
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("ENyer the the array : ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int i=0,j=size-1;
    while(i < j)
    {
        int left_ele = arr[i];
        int right_ele = arr[j];
        if( right_ele == 1)
        {
            j--;
        }
        if( left_ele == 0)
        {
            i++;
        }
        if( left_ele == 1 && right_ele == 0)
        {
            arr[i] =right_ele;
            arr[j]= left_ele;
            i++;
            j--;
        }
    }
    printf(" The elements of array are : ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
#endif

#if 1
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("ENyer the the array : ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int i=0,j=size-1;
    while(i < j)
    {
        int left_ele = arr[i];
        int right_ele = arr[j];
        if( right_ele == 0)
        {
            j--;
        }
        if( left_ele == 1)
        {
            i++;
        }
        if( left_ele == 0 && right_ele == 1)
        {
            arr[i] =right_ele;
            arr[j]= left_ele;
            i++;
            j--;
        }
    }
    printf(" The elements of array are : ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
#endif

