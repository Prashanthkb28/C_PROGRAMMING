/* Documentation
Name: PRASHANTH KB
Date: 01/10/2023
Description: to generate the prime series upto given limit using functionRead a number from user.
Create a function is_prime(), which will check the number is prime or not.
Create a function generate_prime(), which will reuse the function is_prime() to create prime series.

sample Input:    Enter a number: 20
Sample Output:  2 3 5 7 11 13 17 19

*/

#include<stdio.h>

int is_prime(int);                                              // function prototype to check the number is prime

void generate_prime(int);                                      // function prototype to generate the prime series
 
int main()                                                     // main function
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d",&limit);                                        // read the limit from user
    if(limit > 1)                                              //check the user entered limit is positive and greater than 1
    {
        generate_prime(limit);                                 // if it is true call the function to generate the prime series
    }
    else
    {
        printf("Invalid input\n");                            // if condition fails print the invalid message
    }
    return 0;
}

int is_prime(int num)                                         // function definition to check prime
{
    int flag=0,i; 
    for(i=2;i<num;i++)                                        // run a loop from 2 to given limit
    {
        if( (num % i) == 0)                                  // if number is perfectively divisible then its not aprime number
        {
            flag = 1;                                          // hence make flag=1 and come out of loop
            break;
        }
    }
    if(flag == 0)                                            // if the flag value is 0 then return 1 indicating its a prime number
        return 1;
    else
        return 0;                                            // if flag is 0 then return 0 indicating its not a prime
}

void generate_prime(int limit)                               // function definition to generate the prime series
{
    int i,res;
    for(i=2;i<=limit;i++)                                    // run a loop upto limit staarting from 2
    {
        res=is_prime(i);                                     // call a prime function
        if(res == 1)                                           // based on the return value of is_prime function 
        {
            printf("%d ",i);                                 // if its prime number then print the number
        }
    }
}



