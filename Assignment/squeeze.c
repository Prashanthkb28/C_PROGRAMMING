/* Documentation
Name: PRASHANTH KB
Date: 12/10/2023
Description: WAP to squeeze the char in  string s1 that matche sin the string 2  Read two strings s1 and s2 from user.
Remove the characters in s1 that matches with s2.
Input string:
string 1: Dennis Ritchie
string 2: Linux
Output String:
After squeeze s1: Des Rtche
Should not use extra array or the pointer

*/

#include <stdio.h>


void squeeze(char [], char []);                                   // function prototype

int main()                                                        // main function
{
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf("%[^\n]", str1);                                       // read the string 1 from user
    
	getchar();                                                   // to get the new line

    printf("Enter string2:"); 
    scanf("%[^\n]", str2);                                       // read the string 2
    
    squeeze(str1, str2);                                         // function call
    
    printf("After squeeze s1 : %s\n", str1);
    
}
void squeeze(char *str1, char *str2)                             // function definition
{
		int i,j,k;
		for (i=0;str2[i]!='\0';i++)                              // run a loop untill string 2 reaches null char               
		{
				for (j=0;str1[j]!='\0';j++)                      // run a loop untill string 1 reaches null char
				{
						if (str1[j]==str2[i])                    // compare the two strings char by char 
						{
								for (k=j;str1[k]!='\0';k++)      // to sequee the char which matches in both the string               
								{
										str1[k]=str1[k+1];
								}
                                j--;                             
						}
				}
		}
}

