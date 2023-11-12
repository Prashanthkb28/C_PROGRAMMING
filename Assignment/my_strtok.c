/*Documentation---------------------------------------------------------------------------------------
Name:PRASHANTH KB
Date: 24/10/2023
Description:WAP to implement strtok function
sample i/p and o/p:
Test Case 1:
user@emertxe] ./my_strtok
Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
Enter string2 : ;./-:
Tokens :
Bangalore
Chennai
Kolkata
Delhi
Mumbai

Test Case 2:
user@emertxe] ./my_strtok
Enter string1 : -;Bangalore;;::---Chennai:;Kolkata:;Delhi:-
Enter string2 : ;./-:
Tokens :
Bangalore
Chennai
Kolkata
Delhi
------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    // char array declaration
    char str[50], delim[50];
    // read string freom user
    printf("Enter the string  : ");
    scanf("%s", str);
    
    __fpurge(stdout);                       // to clear the std o/p buffer
    // read delimeter from user
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    
    __fpurge(stdout);
    
    // function call
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}
// function definition
char *my_strtok(char str[], const char delim[])

{
	int j = 0;                                     // To iterate delim string till '\0'
	static int pos;                                //To iterate main string till '\0'..Static var bcoz to continue with next character after replacing \0 char when token found in string
	static char *ptr;                             //To take the base addr of main string initially and keep moving with next characters
	int start = pos;                              //This var actually confirms whether both prev and present char are \0, if yes then without returning any addr, moving with next char in string
	if ( str != NULL )                           //If str is not equal to NULL addr then temp takes addr of str, for first time when fn called
	{
		ptr = str;
	}
	while ( ptr[pos] != '\0')                     //Iterating with all characters from main string and checking for tokens
	{
		j = 0;
		while ( delim[j] != '\0' )               //Iterating all tokens with each char of main string and if found equal then replacing it
		{
			if ( delim[j] == ptr[pos] )           //If token found in string
			{
				ptr[pos] = '\0';                  //Making that char in string as \0
				pos++;                             //Then moving with next char
				if (ptr[start] != '\0')       //If the prev char was not \0, then returning the base addr for first and then addr after \0
				{
					return (&ptr[start]);
				}
				else
				{
					start = pos;                  //If prev char and present char became \0, then just moving with next char
					pos--;                         //To compensate i++ present after inner while loop
					break;                       //breaks from inner while loop
				}
			}
			j++;
		}
		pos++;
	}
	if ( ptr[start] == '\0' )                  //If \0 has been reached in main string then returning NULL as per behaviour of strtok
	{		
		return NULL;
	}

	else
	{
		return (&ptr[start]);                  //returning the addr...
	}
}
