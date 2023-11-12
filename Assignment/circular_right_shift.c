/* Documentation
Name: PRASHANTH KB
Date: 23/09/2023
Description:circular right shiftPass num and n to the function.Shift num, n times (towards right).While shifting the shifted bits should get replaced at the alternate end.For right shifting, the shifted bits should come at left most side.Return the new number from the function.Print the new number.
sample Input:  Enter num: -12
               Enter n : 3
 Sample Output:Result : 10011111 11111111 11111111 11111110



*/

#include<stdio.h>
int print_bits(int);                                                  // function prototype to print the bits one by one
int circular_right_shift(int ,int);                                   // function prototype to perform circular right shift

int main()                                                            // main function
{
 int num,n,result;
 //printf("Enetr the number:");
 scanf("%d",&num);                                                    // read the number from user
 //printf("Enter the no of shifts:");
 scanf("%d",&n);                                                      // read the no of times shift to be done
 result=circular_right_shift(num,n);                                  // calling function of circular right shift
 printf("Result: ");
 print_bits(result);                                                  // calling function to print the bits
    return 0;
}

int circular_right_shift(int num,int n)                                 // function definition for circular right shift
{
    return (num & ((1<<n)-1) ) << (32-n) |((unsigned) num>>n);         // getting the n bits from msb merge with right shifted the number 
  
    //can be used this logic as well- unsigned int a=num; //mask=( ((1<<n)-1) << (32-n) );
}
int print_bits(int result)                                             // function definition to print bits
{
    int i;
    for(i=31;i>=0;i--)                                                 // run a loop upto 31 to get 32 bits
    {
        if(result & (1<<i))                                            // check the each bit is set or not
            printf("1 ");                                               // if bit is set print 1 else print 0
        else
            printf("0 ");
    }
}

