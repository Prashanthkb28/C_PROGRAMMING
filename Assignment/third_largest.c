/* Documentation
Name: PRASHANTH KB
Date: 24/09/2023
Description:Read size and array elements from the user. You need to find 3rd largest element in the array without sorting or modifying the array.You need to pass array to the function. U need to collect array as pointer inside a function
sample Input:   Enter the size of the Array : 5
                Enter the elements into the array: 5 1 4 2 8
Sample Output: Third largest element of the array is 4

*/

#include<stdio.h>
int third_largest(int [], int);                                          // function prototype

int main()                                                            // main function
{
    int size, ret;
    printf("Enter the size of the array :");
    scanf("%d",&size);                                                // read the size from user
    int arr[size];
    for(int i=0;i<size;i++)                                          // run a loop upto size and read the array values from user
    {
        scanf("%d",&arr[i]);
    }
    ret=third_largest(arr, size);                                     // function call and collect the return value from the function
    printf("Third largest element of the array is %d\n",ret);      // print the third largest ele of array collected from function
    return 0;
}

int third_largest(int arr[],int size)                                 // function definition
{
    int large=arr[0], sec_large=arr[0],third_large=0;                             // initilaize the large, second large  and third largevalue
    for(int i=0;i<size;i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];                                          // find the largest value in an array
        }                                                           
        if(arr[i] < sec_large)
        {
            sec_large = arr[i];                                     // find the smallest value in an array and store in sec_large 
        }                                              
    }
    for(int i=0;i<size;i++)                                        //run a loop upto array size to find the second largest ele of array
    {   
        // if array element should be greater than sec_largest value and array ele should be less than  largest element of the array 
        //then upadate the second largest value
        if( (arr[i] > sec_large) && (arr[i] < large) )          
        
        {
            sec_large = arr[i];                                      // update the second largest value
        }
    
   }
    for(int i=0;i<size;i++)
    {
        // if array element should be greater than third_largest value and array ele should be less than second largest element of the array 
        //then upadate the third largest value
        if( (arr[i] > third_large) && (arr[i] < sec_large) )
        {
            third_large = arr[i];
        }
    }
    return third_large;                                          // return the third largest value to caller
}
