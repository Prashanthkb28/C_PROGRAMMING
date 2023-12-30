/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
 int num,count=0;
 printf("Enter the number:");
 scanf("%d",&num);
 count=num&1;
 if(count ==0)
     printf("The given number(%d) is even",num);
 else
     printf("The given number(%d) is odd",num);

    return 0;
}

