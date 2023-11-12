/* Documentation
Name: PRASHANTH KB
Date: 27/08/2023
Description: WAP  to check if number is perfecrt or not 
perfect number means sum 0f factors is equal to the number then its a perfect
              this an exculding method that means the given number is not taken into factor consideration     
Enter a number: 6
Yes, entered number is perfect number
Test Case 2:
Enter a number: 10
No, entered number is not a perfect number
*/

#include<stdio.h>                                                       // include stanadrd i/p o/p header file
int main()                                                              // start of program
{
    int num, sum=0;                                                      // declare and intilaize the required variables
    printf("Enter a number:");                                          // prompt the user to enter a number
    scanf("%d",&num);                                                   // read the number from user
    if ( num < 0)                                                       // if user enterd number is negative then print erroe meassage
    {
        printf("Error: Inavlid Input,Enter only positive number\n");
    }
    else                                                               // if user enterd number is +ve then perform the operation
    {
        for(int i=1;i<=num-1;i++)                                      // run a loop upto to number-1 times
        { 
            if(num % i == 0)                                           // to calculate the factors
            {
                sum=sum+i;                                             // factors are added up
            }
        }
        if ( sum == num)                                               // if sum of factors of number is equal to user entered num
        {                                                              // then it is perfect number
            printf("Yes,entered number is perfect number\n");          // print the meassage it is perfect number
        }
        else                                                            // if sum of factors and number is not equal
        {                                                               // then not a perfect number
          printf("No,entered number is not a perfect number\n");        // print the meassage its not a perfect number
        }
    }
    return 0;                                                           // return 0 from main function after sucessful compliation
}                                                                       // end of main function 


