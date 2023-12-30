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
    int size1,size2,i,j;
    printf("Enter the  array  1  size :");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enetr the elements into an array :");
    for(int i=0;i<size1;i++)
        scanf("%d",&arr1[i]);
            
    printf("Enter the  array  2  size :");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enetr the elements into an array :");
    for(int i=0;i<size2;i++)
        scanf("%d",&arr2[i]);
    
    printf("The common elements are  : ");
    for( i=0;i<size1;i++)
    {
        for( j=0;j<size2;j++)
        {
            if( arr1[i] == arr2[j])
            {
                printf("%d ",arr1[i]);
                break;
             }
        }
    } 
    return 0;
}
