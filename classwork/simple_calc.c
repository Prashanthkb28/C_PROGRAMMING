/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description:WAP to write a smple calculator
sample Input:
Sample Output:
*/
 #include<stdio.h>
int main()
{
    int num1,num2;
    char oper;
    printf("Enter the two integer numbers:");
    scanf("%d %d",&num1,&num2);
    printf("\nenter the operator:");
    scanf(" %c",&oper);
    switch(oper)
    {
        case '+' : printf("the addition of two numbers is %d\n",(num1+num2));
                   break;
        case '-': printf("the difference of two numbers is %d\n",(num1-num2));
                  break;
        case 'x' :printf("the multiplication of two numbers is %d\n",(num1*num2)); 
                  break;
        case '/': if (num2!=0)
                  printf("The division of two numbers is %lf\n",((float)(num1)/num2));
                          else
                          printf("ERROR:division by zero");
                          break;
         default:printf("Inavlid choice of input\n");
         }
         return 0;
  }

