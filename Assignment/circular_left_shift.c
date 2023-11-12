/* Documentation
Name: PRASHANTH KB
Date: 20/09/2023
Description:circular left shift Pass num and n to the function.Shift num, n times (towards left).While shifting the shifted bits should get replaced at the alternate end.For left shifting, the shifted bits should come at right most side.
sample Input:     Enter num: -2
                  Enter n : 3
Sample Output:    Result in Binary: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 1 1 1
*/

#include<stdio.h>
int print_bits(int);                                              // function protoyype t0 print the binary values bit by bit
int circular_left_shift(int ,int);                                // function prototype to perform circular left shift andreturn the value

int main()                                                        // main function
{
 int num,n,result;
 printf("Enetr the number:");
 scanf("%d",&num);                                               // read the number from user
 printf("Enter the no of shifts:");
 scanf("%d",&n);                                                 // read the number of times to be shifted
 result=circular_left_shift(num,n);                              // calling the function to perform circular left shift
 print_bits(result);                                             // calling the functon to print the bits
 
    return 0;
}

int circular_left_shift(int num,int n)                            // function definition of circular left shift
{
   int mask,res;
    return num<< n |((unsigned) num & ( ((1<<n)-1) << (32-n)) )>>(32-n);
                                           //mask=( ((1<<n)-1) << (32-n) ); // res=num<< n |((unsigned) num & mask)>>(32-n);// return res;
                                            //or can be used with this logic -unsigned int a=num;//return (num<<n) | (a>> (32-n));
}
int print_bits(int result)                                        // function definition to print the bits
{
    int i;
    for(i=31;i>=0;i--)                                            // run a loop upto 31
    {
        if(result & (1<<i))                                       //check for each bit is set or not one by one                          
            printf("1");                                          // if bit is set print 1 else print 0
        else
            printf("0");
    }
}


