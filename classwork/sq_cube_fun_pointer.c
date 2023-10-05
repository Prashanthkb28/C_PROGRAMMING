/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
void square_cube(int *square,int *cube,int num)
{
    *square=num*num;
    *cube=num*num*num;
}
int main()
{
    int num;
    int square=0, cube=0;
    //printf("Enter the number:");
    scanf("%d",&num);
    square_cube(&square,&cube,num);
    printf("Square is %d\n",square);
    printf("Cube is %d",cube);
    return 0;
}
