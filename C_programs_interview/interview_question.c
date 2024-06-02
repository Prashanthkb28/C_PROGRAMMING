/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description  : Given a string , sort the alphabets in ascending order according to  dictionary if the lwtter is not found in string replace with dot(.) and if the letter is repeated add only once.
sample Input :Are you Coming
Sample Output:REARRANGED STRING IS :A.c.e.g.i...mno..r..u...Y.
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

char *rearrange(const char *input)
{
    static char result[26+1];
    int removechars=0;
    memset(result,'.',26);
    for(int i=0;input[i]!='\0';i++)
    {
        char ch=input[i];
        if(isalpha(ch))
        {
            char lowerch=tolower(ch);
            if(result[lowerch-'a']=='.')
            {
                result[lowerch-'a']=ch;
            }
            else
            {
                removechars++;
            }
        }
    }
    result[26]='\0';
    printf("REARRANGED STRING IS :%s\n ",result);

    return result;
}
int main()
{
    const char *input ="Are You coming";
    char *output=rearrange(input);
 
    return 0;
}

