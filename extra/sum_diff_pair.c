/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<stdbool.h>
int findpair(int arr[],int n,int num)
{
    bool hash[10000]= {false};
//    printf("The hash is %d %b ",hash[1],hash[1]);
    printf("the pairs with sum or difference  equal to %d are :\n",num);
    for(int i=0;i<n;i++)
    {
        int c = num - arr[i];
 
    if(hash[c] == 1)
        printf("(%d %d)\n",arr[i],c);

    hash[arr[i]] = true;

    }
}

int main()
{
   int arr[] ={1, 5, 7, 3, 9, 2};
   int n = sizeof(arr)/sizeof(arr[0]);
   int num = 2;
   findpair(arr,n,num);
 
    return 0;
}

