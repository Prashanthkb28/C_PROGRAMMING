/* Documentation
Name: PRASHANTH KB
Date: 03/09/2023
Description: Read a number, M and N from the user. You need to check whether N th bit is set(1) or not, If yes, then you need to clear the M th bit of the number and print the updated value of num
Sample Execution:

Test Case 1:
Enter the number: 19
Enter 'N': 1
Enter 'M': 4
Updated value of num is 3 

Test Case 2:
Enter the number: 19
Enter 'N': 2
Enter 'M': 4
Updated value of num is 19 
*/

#include<stdio.h>                                    // include standard header file for printf and scanf
int main()
{
  int num,Nth_bit,Mth_bit,result;                    
  printf("Enter the number:");                           
  scanf("%d",&num);                                     // read the number from user
  printf("Enter 'N':");
  scanf("%d",&Nth_bit);                                 // read the nth bit from user
  printf("Enter 'M':");
  scanf("%d",&Mth_bit);                                 // read the mth bit from user to clear

  if(num & (1 << Nth_bit))                              // check for nth bit set or not using mask 1<< nthbit
  {
      num=num & ~(1 << Mth_bit);                        // clear the mth bit if nth bit set
      printf("Updated value of num is %d\n",num);       //after the clearing mth bit display the updated value of number
  }
  else
  {
  printf("Updated value of num is %d\n",num);           // if nth bit is not set then print the number as it is 
  }
    return 0; 
}

