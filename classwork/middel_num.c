#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if((num1<num2 && num2<num3) || (num3<num2 && num2<num1)){
        printf("The middle number is %d\n",num2);}
    else if((num2<num1 && num1<num3) || (num3<num1 && num1<num2)){
        printf("The middle number is %d\n",num1);}
    else{
        printf("the middle number is %d\n",num3);}
    return 0;
}

