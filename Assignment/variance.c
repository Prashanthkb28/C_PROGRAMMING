/* Documentation
Name: PRASHANTH KB
Date: 12/10/2023
Description:variance calculation with dynamic arrayIn probability theory and statistics, variance measures how far a set of numbers is spread out. A variance of zero indicates that all the values are identical. Variance is always non-negative: a small variance indicates that the data points tend to be very close to the mean (expected value) and hence to each other, while a high variance indicates that the data points are very spread out around the mean and from each other
Mean = (sum of x) / size where : size = Number of items in the input
Formula to calculate the variance:sigma = (sum of D2 ) / size
Sample Input: Enter the total no of elements: 10
Sample Output:Variance is 40.000000
*/

#include <stdio.h>
#include <stdlib.h>

float variance(int *, int);                                      // function prototype to calculate variance

int main()                                                       // main functiom
{
    int size;
    float var;
    printf("Enter the no of elements : ");                       //read the size from the user
    scanf("%d",&size);
    int *arr;                                                    // declare a pointer of type integer
    arr = malloc(size*sizeof(int));                                // dynamically allocate the memory using malloc()
    printf("Enter the %d elements ",size);                      
    for(int i=0;i<size;i++)                                      // read the array elements from user
    {
        scanf("%d",&arr[i]);
    }
    var= variance(arr,size);                                    // call the function and collect the returned value from function
    printf("Variance is %f\n",var);                             // print the variance
    free(arr);                                                  // free the allocated memory
    return 0;
}
    
float variance(int *arr, int size)                                // function definition
{
    int mean, sum=0;
    float var_result;
   for(int i=0;i<size;i++)
   {                                                               // calculate the sum of the array elements
       sum = sum + arr[i];
   }
   mean = (sum/size);                                               // calculate the mean
   sum=0;
   for(int i=0;i<size;i++)
   {
       arr[i] = arr[i] - mean;                                      // calculate the deviation
       arr[i] = arr[i] * arr[i];                                    // calclate the square of  diff(deviation)the array elements
       sum = sum + arr[i];                                          // calculate the sum of(squared deviated) the squared elements
   }
   var_result = sum/size;                                           // calculate the mean i.e... variance
   return var_result;                                              // return the variance value to caller
}

    

