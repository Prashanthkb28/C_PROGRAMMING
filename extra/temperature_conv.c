/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description: to convert the temperature to celsius and fahrenit 
sample Input:
Sample Output:
*/

#include<stdio.h>
float celisus_degree(float);
float fahrenheit_temp(float);
int main()
{
    float celisus,fahrenheit;
    printf("Enter the temperature in celisus:");
    scanf("%f",&celisus);
    printf("Enter the temperature in fahrenit:");
    scanf("%f",&fahrenheit);
    printf("The degree celsius value is  %f after converting from fahrenheit:\n",(celisus_degree(fahrenheit)));
    printf("The fahrenheit value is %f after converting from degree celsisus:\n",(fahrenheit_temp(celisus)));
    return 0;
}
float celisus_degree(float f)
{
   float c;
   c=(((float)5)/9) *(f-32);
   return c;
}

float fahrenheit_temp(float c)
{
    float f;
    f=((float)c*(9/5))+32;
    return f;
    }
