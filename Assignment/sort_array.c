/* Documentation
Name: PRASHANTH KB
Date: 26/09/2023
Description:Print the values in sorted order without modifying or copying array
sample Input:  Enter the size : 5
               Enter 5 elements 
               10 1 3  8 -1
Sample Output: After sorting: -1 1 3 8 10
               Original array values 10 1 3 8 -1
*/

#include<stdio.h>
void print_sort(int [], int);                                  // function prototype

int main()                                                     // main function
{
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);                                        // read the size of array
    int arr[size];                                            // declare the array
    printf("Enter the %d elements\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);                                  // read the array elements from user
    }
    printf("After sorting:");
    print_sort(arr,size);                                     // call the function
    printf("\n");
    printf("Orginal array values ");
    for(int i=0;i < size;i++)
    {
        printf("%d ",arr[i]);                                 // print the original values of array
    }
    return 0;
}

void print_sort( int arr [] ,int size)                        // function definition
{
    int small = arr[0], large = arr[0],sec_small;             // declare the variables assign smalle and large value as 1st ele of array
    int i,j;
    for( i=0;i<size;i++)                                      // run a loop upto size of the array
    {
        if(arr[i] < small)
            small = arr[i];                                     // find the smallest value in an array

        if(arr[i] > large)
            large = arr[i];                                     // find the largest value in an array
    }
    sec_small = large;                                          // initialize the second smallest value to largest value of array
    for(i=0;i<size;i++)
    {
        sec_small=large;
        for(j=0;j<size;j++)
        {
            if( (arr[j] > small) && (arr[j] < sec_small) )      //check if array ele is greater than smallest value&less than second small      
                    sec_small = arr[j];                           // update the second smallest value
         }
         printf("%d ",small);                                   // print the smallest value
         small = sec_small;                                       // upadte the smallest value
     }
 }     



