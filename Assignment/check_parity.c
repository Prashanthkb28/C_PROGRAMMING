/* Documentation
Name: PRASHANTH KB
Date: 01/08/2023
Description:WAP to count number ofset bits in a given number and print parity
sample Input: Enter the number:7
Sample Output:
Number of set bits=3
Bit parity is Odd
sample Input:Enter the number:15
sample output:
Number of set bits=4
Bit parity is even
*/

#include<stdio.h>                                                 //include standard i/p o/p header file
int main()                                                        // start of program
{
    int num,count_set_bits=0,result;                              // declare and intialize the required variables
    printf("Enter the number:");                                  //prompt the user to enter the number
    scanf("%d",&num);                                             // read the number from user
    for(int i=0;i<=31;i++)                                        // run a loop 0 to 31 for a integer number 32 bits 
    {
        result=num & (1<<i) ;                                     //check for a set bit of given number by mask=1<<i to check for each bit 
        if(result)                                                // if the result is any non zero value then bit is set
            count_set_bits++;                                     // increment for each bit set
     }
  printf("Number of set bits=%d\n",count_set_bits);               //print the total number of set bits count
if((count_set_bits & 1) == 0)                                     //to check the total count set bits are even/odd
    printf("Bit parity is Even\n");                               // if the result is zero then count of set bits is even number
else
    printf("Bit parity is Odd\n");                                // if any non-zero number then count of set bits is odd number
return 0;                                                         // end of program i.e program termination
}
