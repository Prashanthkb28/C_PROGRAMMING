/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/
#if 0
struct sample
{
    int i:4;
    int c:4;
};

#include<stdio.h>
int main()
{

   struct sample s={4,12};
  printf("%d %d",s.i,s.c); 
 
    return 0;
}
#endif
#if 1
#include<stdio.h>

int post_inc(int *n)
{
    int temp=*n;
    *n=*n|1;
    return temp;
}
int main()
{
    int i=0,x;
    x=post_inc(&i);
    printf("x=%d :i=%d\n",x,i);
}
#endif
