#include<stdio.h>
int main()
{
    int num1=1,num2=40,num3=10;
    if(num1>num2)
    {
        if(num1>num3)
        {
            if(num2>num3)
             printf("the middle number is %d",num2);
            else
                printf("the middle number is %d",num3);
        }
        else
            printf("the middle number is %d",num1);
    }
    else
    {
        if(num2>num3)
            printf("the middle number is %d",num3);
        else
            printf("the middle number is %d",num2);
    }


  }


