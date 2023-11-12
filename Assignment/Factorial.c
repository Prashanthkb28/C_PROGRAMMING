/* Documentation
Name: PRASHANTH KB
Date: 25/09/2023
Description:write a program to find the factorial of given number using recursion function using main function
sample Input:  Enter the value of N : 5
Sample Output: Factorial of the given number is 120

*/

#include<stdio.h>
int main()                                                               
                                                                          // main function
{
    static int num;                                                      // declare a static variable
    static unsigned long long int fact=1;                               // initialized fact=1
    static int temp=0;                                                  // declare the static variable to read the input from user
    if(temp == 0)                                                         // if temp variable is zero then read the input from user
    {
        printf("Enter the value of N:");                                // since we are calling main function recursively ,
                                                                        //inorder to avoid each time read i/p from user for each time function called
        scanf("%d",&num);
    }
    temp=1;                                                             // make temporary variable equal to 1 
    if(num==0)
        printf("Factorial of the given number is%llu\n",fact);          // if number is 0 then print fact
    else if( num < 0 )
        printf("Invalid Input\n");                                      // if user enetered number is negative print error message
    else
    {
        fact=fact * num--;                                              // perform the factorial 
    main();                                                             // call main function 
    }
    return 0;
}

