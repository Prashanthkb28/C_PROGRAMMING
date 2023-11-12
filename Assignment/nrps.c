/* Documentation.........................................................................
Name: PRASHANTH KB
Date: 25/10/2023
Description:Generate consecutive NRPS of length n using k distinct characterSuppose k = 3 (say taking 3 distinct characters ).
Let 3 distinct characters be a , b, c.Suppose ‘n’ is the string length to be formed using ‘k’ distinct words.
Let n be 6The string should be formed in such a way that there should not be any consecutive repetitions of the strings
Sample Execution:
Test Case 1:
user@emertxe] ./nrps
Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 str characters : a b c
Possible NRPS is abcbca

Test Case 2:
Enter the number characters C : 3
Enter the Length of the string N : 7
Enter 3 str characters : a b a
Error : Enter str characters
..................................................................................*/


#include<stdio.h>
void nrps(char [], int, int);                                // function prototype of nrps

int main()
{
                                                            // varible and string declaration
    int n, c, i, j;       
    char str[100];
   
                                                              // read number from user
    printf("Enter the number characters C :");
    scanf("%d", &c);

                                                             // read length from user 
    printf("Enter the Length of the string N : ");
    scanf("%d", &n);
    
                                                              // read the array of char array of distinct char
    printf("Enter 3 str characters : ");
    for (i = 0; i < c; i++)
    {
          scanf("\n%c", &str[i]);  
    }    
                                                              // if unique chaaracters calling nrps function
    for (i = 0; i < c; i++)         
    {
        for (j = (i+1); j < c; j++)
        {
            if(str[j] == str[i] )                               // checking for distinct char entered by user
            {
                printf("Error : Enter str characters\n");
                return 1;
            }
        }
    }
    printf("Possible NRPS is\n");
    
    nrps(str, n, c);                                            // function call
 
    return 0;
}
void nrps(char str[], int n, int c)                             // function definition
{
   char temp;                                   
   int i=0,j;
  while(i < n)                                                  // run a loop upto length of string
  {
     for(j=0;(j < c) && (i < n);j++)   
     {
           printf("%c ",str[j]);                                // print the char by char untill number of char and less than length 
           i++;                                                 // increment i 
     }
     
       temp = str[0];                                           // swap the characters
       str[0] = str[c-1];
       str[c-1] = temp;
     
  }
  printf("\n");
} 
