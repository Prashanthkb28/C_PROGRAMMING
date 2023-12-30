/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/
#if 0
#include<stdio.h>
int main()
{
    int size,pos;
    printf("Enter the size :");
    scanf("%d",&size);
    int arr[size];
    printf(" Enter the elements into array:");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf(" enter the position to delete:");
    scanf("%d",&pos);
    if( (pos >size) || (pos < 0) )    /// pos > size
        printf("Inavlid position\n");
    else
    {
        for(int i=pos;i < size;i++)   // pos-1
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
    printf(" The elements of array are :");
    for(int i=0;i<size;i++)
        printf("%d",arr[i]);

 
 
    return 0;
}
#endif

#if 1
#include<stdio.h>
int main()
{
    int size,pos=-1,ele;
    printf("Enter the size :");
    scanf("%d",&size);
    int arr[size];
    printf(" Enter the elements into array:");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf(" enter the element to delete:");
    scanf("%d",&ele);
    int i;
    for( i=0;i<size;i++)
    {
        if(arr[i]==ele)
           {
               pos= i;
               break;
           }
    }
    if( pos == -1)
    {
        printf("Element not found ..\n");
    }

    else
    {
        for(int i=pos;i < size-1;i++)   
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
    printf(" The elements of array are :");
    for(int i=0;i<size;i++)
        printf("%d",arr[i]);
 
 
    return 0;
}
#endif
