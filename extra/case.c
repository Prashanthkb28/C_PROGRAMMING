#include<stdio.h>
int main()
{
    int num;
    printf("enter the choice:");
    scanf("%d",&num);
    switch(num)
    {
        case 1: printf("u entereed 1");
                break;
        case 2-3: printf("range of 2 and 3");
                  break;
        case 4 ... 8 : printf("range of 4 to 8");
                   break;
        case 5+5: printf("u entered 10");
                  break;    
    }
    return 0;
}
// default case is not mandtory  and break for default is not mandatory
//order can be anything
// only integer/char for cade label
// value assigned varibales cannot use in case label ex a=4 the using thus varibale in case label is error
// if break is not given then next case label is executed
// duplicate case labels will leads to error
