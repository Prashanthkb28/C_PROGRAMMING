/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int get_nbits_from_pos(int num,int n,int pos);

int get_nbits_from_pos(int num,int n,int pos)
{
    int res=(((1<<pos)-1) &(num>>(pos-n+1)));
    return res;
}
int main()
{

   int num,n,pos,res;
    printf("Enter the number  no of bits  and pos :");
    scanf("%d %d %d",&num,&n,&pos);
    res=get_nbits_from_pos(num,n,pos);
    printf("RESULT=%d",res);

 
    return 0;
}

