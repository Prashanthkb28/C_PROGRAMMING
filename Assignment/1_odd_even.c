/* Documentation
Name: PRASHANTH KB
Date: 23/08/2023
Description: WAP to check if number is odd or eve The user entered number should identified whether its a odd or a even number. Mention its sign too.
sample Input: Enter the value of 'n':-2
Sample Output:-2 is negative even number
sample input: Enter the value of 'n':-0
sample output:0 is neither odd or even
*/

#include<stdio.h>                                             //include header file for standard i/p o/p function
int main()                                                    // include main function from which program execution begins
{
    int num;                                                 // declare a integer variable
    printf("Enter the value of 'n':");                       // print a prompt to enter the integer value from user  
    scanf("%d",&num);                                        // to read a number
    if (num == 0)                                            // check whether number is equal to zero or not
    {
        printf("%d is neither odd or even\n",num);           //if condition true;then print a message 
    }
    else                                                     // if user entered number is not equal to zero then else part is executed
    {
        if(num > 0)                                          //check for user entered nuber is positive or not 
        {
            if(num % 2 == 0)                                 //condition to check for even or odd  ;if remainder=0 then even else odd
            {
                printf("%d is positive even number\n",num);  // if the remainder is zero;then even number
            }
            else
            {
                printf("%d is positive odd number\n",num);     //if remainder is not zero then its a odd number
            }
        }
        else                                                  // if its not positive number then it will be negative number
        {
                if (num % 2 == 0)                             // check for odd or even
                {
                    printf("%d is negative even number\n",num);  // print even number of negative number
                }
                else
                {
                    printf("%d is negative odd number\n",num);  // if remainder is not zero then odd with negative number
                }
        }
    }
    return 0;                                                   // return 0 from main()  i.e progam execution sucessful
}                                                                 // end of main function


