#include<stdio.h>
int main()
{
    int base,exp;
    float res=1;
    printf("enter the base number:");
    scanf("%d",&base);
    printf("enter the exponent number:");
    scanf("%d",&exp);
   if (exp>0)
   {
       for(int i=1;i<=exp;i++)
           res=res*base;
           res=(int)res;
   }
   else
   {
       for(int i=1;i<=-exp;i++)
           res=res/base;
   }
   if (exp>0)
   printf("%d ^ %d =%d\n",base,exp,(int)res);
   else
   printf("%d ^ %d =%f\n",base,exp,res);
   return 0;
}

