/* Documentation
Name: PRASHANTH KB
Date: 24/09/2023
Description:Read size and array elements from the user. You need to find 2nd largesst element in the array without sorting or modifying the array.You need to pass array to the function. U need to collect as pointer inside a function
sample Input:  Enter the size of the Array : 5
               Enter the elements into the array: 5 1 4 2 8
Sample Output: Second largest element of the array is 5

*/

#include<stdio.h>
int sec_largest(int [], int);                                          // function prototype

int main()                                                            // main function
{
    int size, ret;
    printf("Enter the size of the array :");
    scanf("%d",&size);                                                // read the size from user
    int arr[size];
    for(int i=0; i < size; i++)                                          // run a loop upto size and read the array values from user
        scanf("%d",&arr[i]);
    ret=sec_largest(arr, size);                                     // function call and collect the return value from the function
    printf("Second largest element of the array is %d\n",ret);      // print the second largest ele of array collected from function
    return 0;
}

int sec_largest(int arr[],int size)                                 // function definition
{
    int large=arr[0], sec_large=arr[0];                             // initilaize the large and second large value
    for(int i=0;i<size;i++)
    {
        if(arr[i] > large)
            large = arr[i];                                          // find the largest value in an array
        if(arr[i] < sec_large)
            sec_large = arr[i];                                      // find the smallest value in an array and store in sec_large 
    }
    for(int i=0;i<size;i++)                                        //run a loop upto array size to find the second largest ele of array
    {   
        // if array element should be greater than sec_largest value and array ele should be less than  largest element of the array 
        //then upadate the second largest value
        if( (arr[i] > sec_large) && (arr[i] < large) )          
        
        {
            sec_large=arr[i];                                      // update the second largest value
        }
    }
    return sec_large;                                              // return the second largest value to caller
}
