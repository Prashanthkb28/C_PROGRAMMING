/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    for(int i=0;i<32;i++)
    {
        if(i%4 == 0)
            printf(" ");
        printf("%d",((num>>(31-i)&1)) );
    }
    printf("\n"); 
/*  char * ptr=(char*)&num;
    ptr=ptr+2;
   *ptr=~(*ptr);
  */
    num=(num<<16); 
    for(int i=0;i<32;i++)
    {
        if(i%4 == 0)
            printf(" ");
        printf("%d",((num>>(31-i)&1)) );
    }
    printf("\n"); 
    return 0;
}

