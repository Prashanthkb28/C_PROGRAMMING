/* Documentation
Name: PRASHANTH KB
Date: 28/09/2023
Description  Read size and elements into the array. After reading the input, you need to pass array to the function. In function, you need to remove duplicates/copy non-duplicate elements into new array.You need to print he final output in main
sample Input:   Enter the size: 5
                Enter elements into the array: 5 1 3 1 5
Sample output:  After removing duplicates: 5 1 3

*/

#include<stdio.h>
void remove_duplicate(int  [],int size,int [],int *);                                 // function prototype

int main()                                                                            // main function
{
    int i, size, new_size=0;
    printf("enter the size of the array:");
    scanf("%d",&size);                                                                 // read the size of array
    int arr1[size], arr2[size];                                                        // declare the two array
    for(i=0;i < size;i++)
    {
        scanf("%d",&arr1[i]);                                                           // read the array elements from user
    }
    printf("After removing \nduplicates:");
    remove_duplicate(arr1,size,arr2,&new_size);                                        // function call
      for(int i=0;i<new_size;i++)
      {
         printf("%d ",arr2[i]);                                                        // print the array elements of new size with no duplicates
      }
      return 0;
}

void remove_duplicate(int *arr1, int size,int *arr2,int *new_size)   // function definition
{
    int count=0, flag=0, i, j;                                       // declare and initialize the variable required
    arr2[0] = arr1[0];                                               // copying the 1st ele of  array  to array 2 being a unique element
    count++;                                                         // initially increment the count as array 1st ele is copied to arr2
    for(i=1;i<size;i++)                                              // run a loop to compare from 2nd ele of array hence start from i=1
    {
        for( j=0;j<i;j++)                                            // compare till i previouse elements
        {
            flag=0;                                                  // make flag 0
           if( arr1[i] == arr1[j] )                                  // if array1 ele and array 2 ele are equal 
           {
              flag=1;                                                // if equal make flag 1 and come out of loop 
              break;
           }
        }
       if( flag == 0 )                                               // check flag is 0 or 1
       {
          arr2[count] = arr1[i];                                     // if 0, then copy the array1 ele to array 2
         count++;                                                    // after coping increment the count
       }
    }
    *new_size = count;                                               // now new size of array 2 is assigned with count
}
