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
    int size,count=0;;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the %d elements into the array :",size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    // traverse
    for(int i=0;i<size;i++)
    {
        int num =arr[i];
        while(num != 0)
        {
            if( num % 10 == 0)
                count++;
            num =num/10;
        }
    }
    printf(" the number of ZEros in the individual array elements :%d\n",count);
 
    return 0;
}

