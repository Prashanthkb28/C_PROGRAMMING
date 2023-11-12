/* Documentation
Name: PRASHANTH KB
Date: 04/10/2023
Description:WAP to implement getword function use to get the first word in a sentence of string
sample Input:   Enter the string : welcome to emertxe
Sample Output:  You entered welcome and the length is 7


*/

#include <stdio.h>

int getword(char str[]);                                               // function prototype
    
int main()                                                             // main function
{
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %[^\n]", str);                                        // using selective scanf to read the string untill newline char

		len = getword(str);                                           // function call by passing base address of string

        printf("You entered %s and the length is %d\n", str, len);    // print the first word and its length
}

int getword( char *str)                                               // function definition and collecting using pointer
{
    int length=0;                                                     // variable to store length of word
    while( (*str !=' ') && (*str != '\0') )                           // run untill space and newline is encountered
    {
        *str++;                                                       // increment the index of string to get char one by one
        length++;                                                     // increment the length untill condition becomes fails
    }
    if( *str == ' ')                                                  // after getting a word 
        *str = '\0';                                                  // add null char at end so that helps in printing in main function
    return length;                                                    // return the word length
}
