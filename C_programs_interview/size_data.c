/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description
sample Input:
Sample Output:
*/
#include<stdio.h>
#include<limits.h>
int main()
{
    int option;
    printf("ENTER THE CHOICE\n""1.Basic datatypes size\n""2. Size of modifiers\n""3. SiZE of modifers with datatypes\n""4.Ranges of data types\n");
    scanf("%d",&option);
    switch(option)
    {
      case 1:printf("Size of datatypes\n");
          printf("The size of integer=%zu\n",sizeof(int));
          printf("The size of char=%zu\n",sizeof(char));
         printf("The size of float=%zu\n",sizeof(float));
             printf("The size of double=%zu\n",sizeof(double));
             break;
      case 2:
                 printf("\n____==============Modifiers=============_______\n");
                 printf("The size of short=%zu\n",sizeof(short));
                 printf("The size of long=%zu\n",sizeof(long));
                 printf("The size of long long=%zu\n",sizeof(long long));
                 break;
      case 3:
                printf("\n=====================modifiers with datatype=============\n");
                 printf("The size of signed char=%zu\n",sizeof(signed char));
                 printf("The size of unsigned char=%zu\n",sizeof(unsigned char));
                 printf("The size of signed integer=%zu\n",sizeof(signed int));
                 printf("The size of unsigned integer=%zu\n",sizeof(unsigned int));
                 printf("The size of signed short=%zu\n",sizeof(signed short));
                  printf("The size of unsigned short=%zu\n",sizeof(unsigned short));
                  printf("The size of signed long=%zu\n",sizeof(signed long));
                  printf("The size of unsigned long=%zu\n",sizeof(unsigned long));
                 printf("The size of signed long long=%zu\n",sizeof(signed long long));
                  printf("The size of  long double=%zu\n",sizeof( long double));
                 break;   //undefined dec :error printf("The size of signed long double=%zu",sizeof(signed long double));
    // undefined dec  error:printf("The size of unsigned long double=%zu",sizeof(unsigned long double));
      case 4:  printf("================RANGES==================\n");
               printf("Range of signed int \n%d to %d",INT_MIN,INT_MAX);
               printf("\nRange of Unsigned int \n 0 to %u\n\n",UINT_MAX);
               printf("Range of signed char \n%d to %d\n",SCHAR_MIN,SCHAR_MAX);
               printf("Range of unsigned int \n0 to %d\n",UCHAR_MAX);
               printf("Range of signed short int \n%d to %d\n",SHRT_MIN,SHRT_MAX);
               printf("\nRange of Unsigned int \n 0 to %u\n\n",USHRT_MAX);
               printf("\nRange of signed long int \n%ld to %ld\n\n",LONG_MIN,LONG_MAX);
               printf("\nRange of Unsigned long int \n 0 to %lu\n\n",ULONG_MAX);
               break;
      default:printf("ENTER A VALID OPTIONS TO GET REQUIRED OUTPUT");

               break;
    }
    return 0;
}
