/* Documentation
Name: PRASHANTH KB
Date: 29/09/2023
Description:   In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence  0, 1, -1, 2, -3, 5, -8, 13, -21, 34, -55, 89, -144 . . .By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the subtraction of the previous two.
sample Input:  Enter a number: -21
Sample Output:0, 1, -1, 2, -3, 5, -8, 13, -21

*/

#include<stdio.h>

void positive_fibonacci(int, int, int, int);                                  // function prototype

int main()                                                                    // main function
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d",&limit);                                                      // read the limit from user
    if(limit < 0)                                                            // check if user entered limit is less than zero or not
        positive_fibonacci(limit, 0, 1, 0);                                  // if less than zero then call function
    else
        printf("Inavlid Input\n");                                           // if greater than zero then print inavlid message
    return 0;
}

void positive_fibonacci(int limit, int first, int second, int next_num)      // function definition
{
    printf("%d ",next_num);                                                  // print the next number
    first=second;                                                            // update the first number to second number
    second=next_num;                                                         // update the second number to next number
    next_num=first - second ;                                                // calculate the next number
  if( (next_num >= limit) && (next_num <= -limit) )      
  {      
        positive_fibonacci(limit,first,second,next_num);                     // function call
  }
}
 

