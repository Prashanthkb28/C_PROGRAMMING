#include<stdio.h>
int main()
{
    int x=0;
    while(x++<5)
    {
        printf("%d\n",++x);
        x++;
    }
    printf("out of loop %d\n",x);
  
    return 0;
}

