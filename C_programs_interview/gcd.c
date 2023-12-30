
#include<stdio.h>
int gcd(int num1,int num2)
{
/*    int min =0,gcd;
    if( num1 == 0)
        return num2;
    else if(num2 ==0)
        return num1;
    else if( num1 > num2 )
         {
             min=num2;
         }
    else
        min =num2;

    for(int i=1;i<=min;i++)
    {
        if(num1% i == 0 && num2 %i==0 )
        {
            gcd =i;
        }
    }
    return gcd;*/
    if( num1 == 0)
        return num2;
    if( num2 == 0)
        return num1;
    while( num1 != num2)
    {
        if( num1 > num2 )
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }
    return num1;
}

int main()
{
    int num1,num2;
    printf(" Enetr the two integeres:");
    scanf("%d %d",&num1,&num2);
    if(num1 <0 || num2 < 0)
    {
        printf("Error: Enter positive values\n");
        return 0;
    }
    int result = gcd(num1,num2);
    printf(" The gcd of %d and %d is %d :\n",num1,num2,result);

    return 0;
}

