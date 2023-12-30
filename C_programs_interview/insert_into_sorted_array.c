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
    int arr[20];
    int n, ele,pos=0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of array in ascending order : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to insert into array : ");
    scanf("%d",&ele);

    // find the position to insert into sorted array
    for(int i=0;i<n;i++)
    {
        if(arr[i] < ele)
        {
            pos++;
        }
        else
            break;
    }
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1] =arr[i];
    }
    arr[pos] = ele;
    n++; 
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
 
    return 0;
}

