/* Documentation
Name: PRASHANTH KB
Date: 29/08/2023
Description:WAP to generate AP GP HP series
AP=arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant. ,GP= is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.,HP=inverse of AP
sample execution:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include<stdio.h>                                              // including standard i/p o/p header file
int main()                                                     // start of program
{
    int ap,gp,hp,A,R,N;                                        // declaring the variables required
    printf("Enter the first number 'A': ");                    // prompting meassge to enter a first number of series
    scanf("%d",&A);                                            // reading the first number from user
    printf("Enter the Common Difference / Ratio 'R':");        // prompting user to enter comman differenece and ratio of series
    scanf("%d",&R);                                            // read common difference
    printf("Enter the number of terms 'N':");                  //  prompting user to enter No of terms that  series should  to be printed
    scanf("%d",&N);                                            //  read No of terms from user
    if(N < 0)                                                  //   check the number is positive or not
    {
        printf("invalid input\n");                             // if user entered number is negative print error message
    }
    else                                                       // if user entered number is +ve then do operation
    {
        ap = A;   gp = A;   hp = A;                            // initializing the series with first term 
        printf("AP =%d",ap);                                   // printing the 1st term of the series
        for(int i=1;i<N;i++)                                   // run loop up to N term 
        {
            ap = ap + R;                                       // to calculate the next term of AP series
            printf(", %d",ap);                                 // to print the series of AP each time untill for loop becomes fails
        }
        printf("\n");                                           // to print new line
    
        printf("GP =%d",gp);                                   // printing the first term of GP series
        for(int i=1;i<N;i++)                                   // to run for loop upto N terms
        {
            gp= gp * R;                                        // to calculate the next term of GP series
            printf(", %d",gp);                                 // to print the GP series upto N terms untill for loop fails
        }
        printf("\n");                                          // to get new line
    
        printf("HP =%f",(float)1/hp);                         // printing the HP 1st term by type casting too get precision result
        for(int i=1;i<N;i++)                                  // run the loop upto N terms
        {
            hp= hp + R;                                       // to calculate next term of Hp series
            printf(", %f",(float)1/hp);                       // to print the series  which i reciprocal of AP
        }
        printf("\n");                                          // to get new line
    }
    return 0;                                                  // return from main function of sucessful compliation
}                                                            //  end of main function



