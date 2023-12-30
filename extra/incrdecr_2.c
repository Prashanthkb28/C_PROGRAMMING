/* Documentation
Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
    int x=1;
    printf("%d %d\n",x,x++);// 2 1
    x=1;
    printf("%d %d\n",x++,x);// 1 2
    x=1;
    printf("%d %d %d\n",x,x++,++x); // 3 2 3
    x=0;
    printf("%d %d %d\n",++x,++x,++x);// 3 3 3
    x=0;
    printf("%d %d %d\n",x++,x++,x++);//2 1 0


 
    return 0;
}

