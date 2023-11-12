/* Documentation
Name: PRASHANTH KB
Date: 05/09/2023
Description:      n probability theory and statistics, a median is described as the number separating the higher half of a sample, a population, or a probability distribution, from the lower half. The median of a finite list of numbers can be found by arranging all the numbers from lowest value to highest value and picking the middle one.
Example:
 For getting the median of input array { 12, 11, 15, 10, 20 }, first sort the array. We get { 10, 11, 12, 15, 20 } after sorting. Median is the middle element of the sorted array which is 12.
sample Input:
                   Enter the 'n' value for Array A: 5
                   Enter the 'n' value for Array B: 4
                   Enter the elements one by one for Array A: 3 2 8 5 4
                   Enter the elements one by one for Array B: 12 13 7 5
Sample output: Median of array1 : 4
               Median of array2 : 9.5                                      
               Median of both arrays : 6.75
*/

#include<stdio.h>
int main()
{
    int size1,size2,mid,temp;
    float median1,median2,mean;
    printf("Enter the 'n' value for Array A:");
    scanf("%d",&size1);                                               // read the array size 11
    printf("Enter the 'n' value for Array B:");
    scanf("%d",&size2);                                               // read the array size2
    int arr1[size1] ,arr2[size2];                                     // Declare the two arrays
    printf("enter the elements one by one for Array A:");
    for(int i=0;i<size1;i++)
        scanf("%d",&arr1[i]);                                          // read the array1 elements from user 
    printf("enter the elements one by one for Array B:");
    for(int i=0;i<size2;i++)
        scanf("%d",&arr2[i]);                                           // read the array2 elements from user
    for(int i=0;i<size1-1;i++)                                          // run a loop for array elements
    {
        for(int j=0;j<size1-i-1;j++)                                    // sort the array using bubble sort technique 
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size2-1;i++)
    {
        for(int j=0;j<size2-i-1;j++)                                     // sort the array2 by bubble sort technique
        {
            if(arr2[j]>arr2[j+1])
            {
                temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    if (size1 % 2 ==0)                                                     // if the size of array 1 is even
    {
        mid=size1/2;                                                         // then find  mid index is half a the size of array
        mean=arr1[mid-1] + arr1[mid];                                        // calculate the mean withmiddle index and before index value
        median1=mean/2;                                                     // calculate the mean
        printf("Median of array1:%g\n",median1);                             // print median of array1

    }
    else                                                                     // if array size is odd
    {                                           
        mid=size1/2;                                                         // then middle index is half of size
        median1=arr1[mid];                                                   // mid value is the middle index value
        printf("Median of array1:%g\n",median1);                            // print median
    }
    if (size2 % 2 ==0)                                                       // similarly check for array 2 and calculate median
    {
        mid=size2/2;
        mean=arr2[mid-1] + arr2[mid];
        median2=mean/2;
        printf("Median of array1:%g\n",median2);

    }
    else
    {
        mid=size2/2;
        median2=arr2[mid];
        printf("Median of array1:%g\n",median2);
    }
    printf("Median of both arrays:%g\n",(median1+median2)/2);          // printing the median of both the arrays

    return 0;
}

