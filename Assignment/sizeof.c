/*........................ Documentation...............................................
Name: PRASHANTH KB
Date: 17/10/2023
Description:  WAP to define a macro SIZEOF(x), without using sizeof operator
sample execution: ./a.out
The size of int: 4 
The size of char: 1 
The size of float: 4 
The size of double: 8 
The size of short: 2 
The size of unsigned int: 4 
The size of long int: 8 
The size of unsigned char: 1 
The size of long long int: 8 
The size of long double: 16
.....................................................................................*/

#include<stdio.h>
#define SIZEOF(x)  ( (char *)(&x + 1) - (char *)(&x) )                   // defined a macro    using pointer subtraction to find sizeof
int main()
{
   int num;
   char ch;
   float f_num;
   double d_num;
   short s_num;
   unsigned int u_num;
   long int l_num;
   unsigned char un_ch;
   long long int ll_num;
   long double ld_num;                                             // declare the variables to find the size of the variable type 
   printf("The size of int: %zu \n",SIZEOF(num));                  //  macro
   printf("The size of char: %zu \n",SIZEOF(ch));
   printf("The size of float: %zu \n",SIZEOF(f_num));
   printf("The size of double: %zu \n",SIZEOF(d_num));
   printf("The size of short: %zu \n",SIZEOF(s_num));
   printf("The size of unsigned int: %zu \n",SIZEOF(u_num));
   printf("The size of long int: %zu \n",SIZEOF(l_num));
   printf("The size of unsigned char: %zu \n",SIZEOF(un_ch));
   printf("The size of long long int: %zu \n",SIZEOF(ll_num));
   printf("The size of long double: %zu \n",SIZEOF(ld_num));

    return 0;
}

