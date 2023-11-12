/* Documentation
Name: PRASHANTH KB
Date: 31/08/2023
Description: WAP to find which day of the year Suppose, in a week let us assume first day is 'Sunday', then second day will be 'Monday' and so on. If first day is 'Monday' then the second day will be 'Tuesday' and so on
Positive integer say 'N'. Where 1 <= 'N' <= 365.
      1 <= Starting day <= 7
      Option to set the first day
sample input: Enter the nthday:9      
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
sample output:The day is Tuesday
*/

#include<stdio.h>                                            // include header file for standard i/p o/p
int main()                                                   // start of program
{
    int nth_day , start_day, res;                            // declare the variables required
    printf("Enter the value of 'n':");                       // prompt user to enter a nth day
    scanf("%d",&nth_day);                                    // read th day from user
    if( nth_day > 0 && nth_day <= 365)                       // check nth day must be greater than 0 days and less than ewqul to 365 days
    {
        printf("Choose First Day :\n 1. Sunday\n 2. Monday\n 3. Tuesday\n 4. Wednesday\n 5. Thurday\n 6. Friday\n 7. Saturday\n");
        printf("Enter the option to set the first day:");       // prompt user to enter a first day
        scanf("%d",&start_day);                                 // read the first day
        if (start_day > 0 && start_day <= 7)                    // check the fisrt day should be greater than 0 and <= 7 
        {
            res=((nth_day + start_day -1) % 7);                 // calculate day from nth day and start day to get within 7 days in a week
            switch(res)                                         // switch case to get select day based on match
            {
                case 1: printf("The day is Sunday\n");
                        break;
                case 2: printf("The day is Monday\n");
                        break;
                case 3: printf("The day is Tuesday\n");
                        break;
                case 4: printf("The day is Wednesday\n");
                        break;
                case 5: printf("The day is Thursday\n");
                        break;
                case 6: printf("The day is Friday\n");
                        break;
                case 0: printf("The day is Saturday\n");
                        break;
            }
        }
        else
            printf("Error: Invalid input, First day should be > 0 and <= 7\n");     // if first day < 0 and >7 then display error meassage
    }
    else
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");         // if nth_day is <0 and >365 days print error message
 
return 0;
}
