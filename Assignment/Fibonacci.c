/* Documentation
Name: PRASHANTH KB
Date: 29/09/2023
Description:  Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .By definition, the first two numbers in the Fibonacci sequence are either 1 and 1, or 0 and 1,depending on the chosen starting point of the sequence, and each subsequent number is the sum of the previous two.
sample Input:   Enter a number: 21
Sample Output: 0, 1, 1, 2, 3, 5, 8, 13, 21

*/

#include<stdio.h>
void positive_fibonacci(int, int, int, int);                               // function prototype

int main()                                                                 // main function
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d",&limit);                                                    // read the limit from user
    if(limit > 0)                                                          // check if the user entered limit is greater than 0
        positive_fibonacci(limit, 0, 1, 0);                                //call the function
    else
        printf("Inavlid Input\n");                                         // else print the invalid message
    return 0;
}

void positive_fibonacci(int limit, int first, int second, int next_num)     // function definition
{
    printf("%d ",next_num);                                                 // print the next fibnoacci series
    first=second;                                                           // update first number=second number
    second=next_num;                                                        // update second number=next number
    next_num=first + second ;                                               // calculate the next series number
    if( next_num <= limit)
    {                                                                       // check if the next number is less than or ewual to limit
        positive_fibonacci(limit,first,second,next_num); 
    }        
                                                                            // if true call the function 
}
