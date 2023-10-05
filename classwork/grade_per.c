#include<stdio.h>
int main()
{
    int percent;
    printf("Enter the percentage:");
    scanf("%d",&percent);
    switch(percent)
    {
        case 91 ... 100 : printf("The Grade is A\n");
                          break;
        case 71 ... 90 : printf("The Grade is B\n");
                         break;
        case 51 ... 70 : printf("The Grade is C\n");
                         break;
        case 0 ... 50 : printf("The Grade is F\n");
                        break;
        default: printf("Error :Please enter the percentage less than or equal to 100\n");
    }
    return 0;
}
