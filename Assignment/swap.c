/* Documentation-------------------------------------------------------------
Name: PRASHANTH KB
Date: 18/10/2023
Description:WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t
sample Input:   1. Int
                2. char
                3. short
                4. float
                5. double
                6. string
                Enter you choice : 1

                Enter the num1 : 10
                Enter the num2 : 20
Sample Output:  After Swapping :
                num1 : 20
                num2 : 10
 */

#include<stdio.h>
#define SWAP(t,x,y)   \
{                     \
    t temp=x;         \
    x=y;              \
    y=temp;           \
}

int main()                                                          // main function
{
    int choice;
    printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\n");   // prompt the menu to choose any one
    printf("Enter your choice: ");
    scanf("%d",&choice);                                              // read the choice from user
    switch(choice)                                                    // based on choice perform the swap
    {
        case 1:                                                       // swap for integer type of data
               {
                    int num1, num2;
                printf("Enter the number1: ");             
                scanf("%d",&num1);                                    // read the 1st number from user
                printf("Enter the number2: "); 
                scanf("%d",&num2);                                   // read the 2nd number from user
                SWAP(int,num1,num2);                                 
                printf("After swapping\n");
                printf("Num1= %d\n",num1);
                printf("Num2= %d\n",num2);
               }
               break;
        case 2:                                                     // swap for characters type of data
               {
                    char ch1, ch2;
                printf("Enter the character1: ");
                scanf(" %c",&ch1);                                   // read the 1st char from user
                printf("Enter the character2: ");
                scanf(" %c",&ch2);                                   // read the 2nd char from user
                SWAP(char,ch1,ch2);
                printf("After swapping\n");
                printf("ch1= %c\n",ch1);
                printf("ch2= %c\n",ch2);
              
                }  
               break;
        case 3:                                                     // swap for short type of data
               {
                    short num1, num2;
                printf("Enter the short number1:");
                scanf("%hd",&num1); 
                printf("Enter the short number2: ");
                scanf("%hd",&num2);                
                SWAP(short,num1,num2);
                printf("After swapping\n");
                printf("Num1= %hd\n",num1);
                printf("Num2= %hd\n",num2);
                break;
                }
        case 4:                                                    // swap for floating point data
               {
                    float num1, num2;
                printf("Enter the float number1:");
                scanf("%f",&num1);
                printf("Enter the float number2: ");
                scanf("%f",&num2);
                SWAP(float,num1,num2);
                printf("After swapping\n");
                printf("Num1= %f\n",num1);
                printf("Num2= %f\n",num2);
                break;
                }
        case 5:                                                    // swap for the double type of data
               {
                    double num1, num2;
                printf("Enter the double number1:");
                scanf("%lf",&num1);
                printf("Enter the double number2: ");
                scanf("%lf",&num2);
                SWAP(double,num1,num2);
                printf("After swapping\n");
                printf("Num1= %lf\n",num1);
                printf("Num2= %lf\n",num2);
                break;
                }
        case 6:                                                    // swap for the string data
               {
                    char str1[20], str2[20];
                printf("Enter the string1:");
                scanf("%s",str1);                                  // read the string 1 from user
                printf("Enter the string2:");
                scanf("%s",str2);                                  // read the string2 from user
                char *ptr1, *ptr2;                                 // declare a char pointer
                ptr1=str1;                                         // store the base addr of string 1 in ptr1
                ptr2=str2;                                         // store the base addt of string 2 in ptr2
                SWAP(char *, ptr1, ptr2);                          
                printf("After swapping\n");
                printf("String1= %s\n",ptr1);
                printf("string2= %s\n",ptr2);
                break;
                }
        default: printf("Please enter a valid option\n");           // default choice 
                
                
    }


    return 0;
}
