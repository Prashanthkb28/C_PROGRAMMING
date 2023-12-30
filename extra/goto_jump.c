#include<stdio.h>
int main()
{
    printf("hello\n");
    goto display;
    printf("hi\n");
display:
    printf("goto executed\n");
    return 0;
}
// avoided in the code because in large code it is unconditional jump cannot track the code
