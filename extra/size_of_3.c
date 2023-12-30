/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description
sample Input:
Sample Output:
*/
#include <stdio.h>

int main()
{
    int i;
    
    /* Print the size of basic datatypes */
    printf(" Size of int \t\t\t=== %lu bytes\n", sizeof(int));
    printf(" Size of char \t\t\t=== %lu bytes\n", sizeof(char));
    printf(" Size of float \t\t\t=== %lu bytes\n", sizeof(float));
    printf(" Size of double \t\t=== %lu bytes\n", sizeof(double));
    
    printf(" Size of void \t\t\t=== %lu bytes\n", sizeof(void));
    
    /* Print the size of datatypes using qualifiers*/
    
    /* int */
    printf(" Size of signed short int \t\t=== %lu bytes\n", sizeof(signed short int));
    printf(" Size of unsigned short int \t\t=== %lu bytes\n", sizeof(unsigned short int));
    printf(" Size of signed int \t\t\t=== %lu bytes\n", sizeof(signed int));
    printf(" Size of unsigned int \t\t\t=== %lu bytes\n", sizeof(unsigned int));
    printf(" Size of signed long int \t\t=== %lu bytes\n", sizeof(signed long int));
    printf(" Size of unsigned long int \t\t=== %lu bytes\n", sizeof(unsigned long int));
    printf(" Size of signed long long int \t\t=== %lu bytes\n", sizeof(signed long long int));
    printf(" Size of unsigned long long int \t=== %lu bytes\n", sizeof(unsigned long long int));
    
    /* char */
    printf(" Size of signed char \t\t\t=== %lu bytes\n", sizeof(signed char));
    printf(" Size of unsigned char \t\t\t=== %lu bytes\n", sizeof(unsigned char));
    
    /* double */
    printf(" Size of long double \t\t\t=== %lu bytes\n", sizeof(long double));
    
    /* short */
    printf(" Size of signed short \t\t\t=== %lu bytes\n", sizeof(signed short));
    printf(" Size of unsigned short \t\t=== %lu bytes\n", sizeof(unsigned short));
    
    /* long */
    printf(" Size of signed long \t\t\t=== %lu bytes\n", sizeof(signed long));
    printf(" Size of unsigned long \t\t\t=== %lu bytes\n", sizeof(unsigned long));
    
    /* long long */
    printf(" Size of signed long long \t\t=== %lu bytes\n", sizeof(signed long long));
    printf(" Size of unsigned long long \t\t=== %lu bytes\n", sizeof(unsigned long long));
    
    return 0;
} 
