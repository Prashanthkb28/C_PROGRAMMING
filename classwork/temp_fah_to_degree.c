/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
float  Degree_celsius(float); // function declaration
int main()
{
    float fa_num, result;
   // printf("Enter the Fahrenheit:");
    scanf("%f",&fa_num);
    result=(Degree_celsius(fa_num)); // function call
    printf("Degree celsius %f",result);
    return 0;
}

 float Degree_celsius(float fa_num)  // functionn defintion
{
    float degree;
    degree= (float)5/9*(fa_num -32); // calculate degree celisus
    return degree;
}
