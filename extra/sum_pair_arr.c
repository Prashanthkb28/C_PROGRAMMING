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
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d ele :",size);
    for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if( arr[i]+arr[j] == num)
                printf(" pair found :  %d + %d = %d\n ", arr[i],arr[j],num);
        }
    }
 
 
    return 0;
}

