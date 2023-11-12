/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description:WAP to Generate positive fibonacci numbers
           IN mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . . OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .
• By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the sum of the previous two

sample Input:Enter a number: 10
Sample Output: 0 1 1 2 3 5 8
sample exection: Enter a number: -21
                 Invalid input
*/

#include<stdio.h>                                               // include standard i/p o/p header file
int main()                                                      // start of program
{
    int num;                                                    // declare the integer variable
    printf("Enter a number:");                                  // prompt user to enter a integer number
    scanf("%d",&num);                                           // read the number from user
    if ( num >= 0)                                              // check for number is postive
    { 
        int first_num=0,sec_num=1,next_num=0;                   // declare and intilaize the variables required
        next_num = first_num + sec_num;                         // to calculate next term of fib series
        printf("%d %d ",first_num,sec_num);                     // print the 1st and 2nd terms of series
        while(next_num <= num)                                  // run a loop until next number <= entered number
        {
            printf("%d ",next_num);                             // print the next number each time when entered into loop
            first_num=sec_num;                                 // to calculate next terms assign the variables
            sec_num=next_num;
            next_num=first_num + sec_num;                       // to calculate next term of fib series
        }
    }
    else
       printf("Invalid input\n");                               // if number is negative number then print error measage
   return 0;                                                    //  return o for sucessful compliation of program
}                                                               // end of main function

   


