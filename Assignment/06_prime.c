/* Documentation
Name: PRASHANTH KB
Date: 9/09/2023
Description:    In mathematics, the sieve of Eratosthenes, one of a number of prime number sieves, is a simple, ancient algorithm for finding all prime numbers up to any given limit. It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the multiples of 2.
The sieve of Eratosthenes is one of the most efficient ways to find all of the smaller primes.

sample Input:Enter the value of 'n' : 20
Sample Output:The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19

*/

#include<stdio.h>
int main()
{
    int num;                       
    printf("Enter the number:");            
    scanf("%d",&num);                                           // read number from a user till upto where primes are required
    if (num>0 && num > 1)                                       // the user entered number shoulb be positive 
    {                                                           // and number must be greatr than one  because prime numbers starts from 2
    int arr[num-1],i,j;                                         // declare the array
    for(i=0;i<num-1;i++)                                        // run a loop to store an array ele from 2 to till user entered number
        arr[i]=i+2;                                             // store array ele from 0th index start from value  2 
    for(i=0;arr[i]*arr[i]<=num;i++)                             // run a loop upto square of the number.
    {
        if (arr[i]!=0)                                          // if array ele are non zero enter into block
        {
            for(j=arr[i]+i;j<=num-2;j=j+arr[i])                // find the factors of a number 
            {
                arr[j]=0;                                      // if factors found make them zero such that prime numbers are left
            }
        }
    }

    printf("The primes less than or equal to %d are:",num);
    for(i=0;i<num-1;i++)                                           // loop to print array elements
      if(arr[i]!=0)                                                // print the non zero elements of array which is prime numbers
      {
        printf("%d, ",arr[i]);
    }
    }
    else
        printf("Please enter a positive number which is >1\n");

    return 0;
}

