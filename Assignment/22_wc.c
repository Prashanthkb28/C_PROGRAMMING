/* Documentation
Name: PRASHANTH KB
Date: 29/09/2023
Description: WAP to count the number of charcters,words and lines entered through stdin
Read the charcters from user untill End of File(EOF),if EOF received  then print the charcter count,word count,line count.the code should exactly works like wc command of linux
sample Input:   hello     world
                Dennis Ritchie
                Linux
Sample Output:  line count : 3
                word count : 5
                character count:39

*/
/* logic of the code
   read the character untill the EOF(ctrl+d) is encountered  
   each time character entered count the character count
   if the character entered is newline count the line count
   keep the prev char enetered in a variable and check ,
   if prev charctered is not newline or space or tab then if charcate entered is space ,tab or newline then count the words
   at last after the EOF encountered and previous character is not newline then increment the word_count
   */

#include<stdio.h>
int main()
{
    int word_count=0, line_count=0, char_count=0;
    char ch, prev_ch;
    while( (ch =getchar())!=EOF)
    {
         char_count++;
         if(ch=='\n')
           {
              line_count++;
           }
         if( (prev_ch!=' ') && (prev_ch != '\n') && (prev_ch!='\t') )
            {
                if( (ch== ' ')||(ch=='\t')||(ch=='\n') )
                    {
                       word_count++;
                      
                    }
             }
         prev_ch=ch;
    }
    
    if( (prev_ch!='\n') && (ch==EOF) )
    {
        word_count++;
    }
    printf("\n line count: %d\n word count: %d\n character count: %d\n",line_count,word_count,char_count);
 
    return 0;
}

