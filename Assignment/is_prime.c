/* Documentation
Name: PRASHANTH KB
Date: 01/10/2023
Description: WAP to check whether the given number is prime or not
sample Input: Enter a number: 2
Sample Output: 2 is a prime number
sample input:Enter a number: 4
sample output:4 is not a prime number
 */

#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num > 0 && num > 1)                                       // check the user entered number is greater than zero 
                                                                 // prime number starts from 2 hence  number entered by user greater than1
     {

       for(int i=2;i<=(num/2);i++)                      // the greatest factor which can divide a number is half of number
         {
           if((num % i)==0)                             // if the number is perfectly divisible then its not a prime
              {
                 flag = 1;                                // if its divisble perfectly then make flag equal to 1
                 break;                                  // come out of the loop
              }
         }
       if(flag)                                        //  check if flag is one  or zero
         {
           printf("%d is  not a prime number\n",num);   // if flag  is non zero number then prints its a prime
         }
      else
         {
           printf("%d is a prime number\n",num);         // else print a it is prime number
         }
    }
    else
        printf("Inavlid input\n");
 
 
    return 0;
}

