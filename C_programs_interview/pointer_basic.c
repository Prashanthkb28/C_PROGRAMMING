/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
 
    int x=10;
    char *cptr;                    
    float *fptr;
//    fptr=10;  ----> leads to warning
  //  printf("%d",*fptr);  --.> while access the value segmenation fault
    int *ptr=&x;              // pointer declaration stores the address of x
    printf("%d\n",*ptr);    // value of the x
    printf("%p\n",&x);       // %p prints the address in hexa
    printf("%p\n",ptr);  // also address
    printf("%zu\n",sizeof(&x));  // size of pointer
    printf("%zu\n",sizeof(ptr));  // size of pointer
    printf("%zu\n",sizeof(*ptr));// size of the value of pointer addresss
    printf("%zu\n",sizeof(fptr)); // size of pointer 
    printf("%zu\n",sizeof(cptr));// size of pointer   
 // any data type of pointer allocates same memory forpointer variable but depends on system bitness 8 for 64-bit and 4 for 32 bit
    return 0;
}
/*  note &--->> address (referncing)
    * --->value(defrencing)

    int *ptr =10;  -----segmenation fault */

