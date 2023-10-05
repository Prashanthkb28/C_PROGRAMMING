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
    int n,m,i,j,flag=1;
   // printf("Enter the array1 size:");
    scanf("%d",&n);
    //printf("Enter the array2 size:");
    scanf("%d",&m);
    int arr1[n],arr2[m];
   
    //printf("Enter the array1 elements:");
    for(i=0;i<n;i++){
    scanf("%d",&arr1[i]);}
     //printf("Enter the array2 elements:");
    for(j=0;j<m;j++){
    scanf("%d",&arr2[j]);}
    if(n!=m)
    {
        flag=0;
    }
    else
    {
        for(i=0;i<n;i++)
        {
          int found=0;
          for(j=0;j<m;j++)
          {
              if(arr1[i]==arr2[j])
              {
                  found=1;
                  break;
              }
          }
            if(!found)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
        for(i=0;i<m;i++)
        {
          int found=0;
          for(j=0;j<n;j++)
          {
              if(arr2[i]==arr1[j])
              {
                  found=1;
                  break;
              }
          }
            if(!found)
            {
                flag=0;
                break;
            }
        }
        }
    }
    if(flag)
    printf("Array elements are equal");
    else
    printf("Array elements are not equal");
  return 0;
}
