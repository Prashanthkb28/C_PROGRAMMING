/* Documentation
Name: PRASHANTH KB
Date: 12/10/2023
Description: to implement itoa() to convert the entered integer number to string
sample Input: Enter the number: -1234
Sample Output:Integer to String is -1234
*/

#include<stdio.h>

void itoa(int num, char str[]);                               // function prototype to implement itoa()

int main()                                                    // main function
{
		int num=0;
		char str[10];

		printf("Enter the number:");
		scanf("%d", &num);
		itoa(num, str);

		printf("Integer to string is %s", str);
}
void itoa(int num, char str[])                                // function definition
{
		int rem=0, j=0;
		if(num > 0)                                             // if the number is greater than zero
		{
				while(num > 0)
				{
						rem = (rem*10)+(num%10);               // reverse the number
						num = num/10;
				}
				while(rem > 0)
				{
						str[j] = (rem%10)+48;                  // convert to string of each digit
						rem = rem/10;
						j++;
				}
				str[j] = '\0';                                // add null character at end of string
		}
		else if (num == 0)
		{

				str[0] = '0';                                // if the number is 0 then print the string as 0
				str[1] = '\0';                               // add null char at end
		}
		else                                               // else the number can be negative number
		{
				num=num*-1;                                // add the negative sign
				while(num > 0)
				{
						rem = (rem*10)+(num%10);             // reverse the number
						num = num/10;
				}

				while(rem > 0)
				{
						str[j+1] = (rem%10)+48;             // convert to string by each digit
						rem = rem/10;
						j++;
				}
				str[0] = '-';                               // attach the neagtive sign at the beginning 
				str[j+1] = '\0';                            // add the null character at the end
		}
}
    
