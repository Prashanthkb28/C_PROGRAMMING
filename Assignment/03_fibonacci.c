/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description:WAP to Generate negative fibonacci numbers
 In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence  0, 1, -1, 2, -3, 5, -8, 13, -21, 34, -55, 89, -144 . . .
• By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the subtraction of the previous two
sample input: Enter a number: -13
sample output:0 1 -1 2 -3 5 -8 13

Enter a number: 13
Invalid input
*/

#include<stdio.h>                                                 // include standard i/p o/p header file
int main()                                                        // start of program
{
    int num;                                                      // decalre a integer number variable 
    printf("Enter a number:");                                    // prompt the user to enter a number
    scanf("%d",&num);                                             // read a number from user
    int first_num=0, sec_num=1, next_num;                           // declare and intialize the reqired varibales and intiliaize the value
    next_num = first_num - sec_num;                               // to calculate the negative fib next term
    printf("%d %d ",first_num,sec_num);                           // print the 1st 2 fib numbers
    if ( num < 0)                                                 // if number is negative number then execute
    { 
        while(next_num >= num && next_num <= -num)                // run a loop untill the condition becomes true
        {
            printf("%d ",next_num);                               // print next number each time entered into loop
            first_num= sec_num;                                   // assign the variables to calculate next term of fib series
            sec_num= next_num;
            next_num= first_num - sec_num;                        // to calculate the next number of fib series
        }
    }
    else                                                         // if user entered number is +ve then print error message
       printf("Invalid input\n");
   return 0;                                                     // return 0 from main function for sucessful compliation
}                                                                // end of main function

 

