/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int *p,*q;
    int x=10,y=20,z;
    //*p=&x;
    p=&x;
    //*q=&y;
    q=&y;
    z=*p/(*q);
    printf("z=%d\n",z);
    char str[20],dest[20];
    printf("ENetr the string1:");
    //scanf("%s",str);
    fgets(str,20,stdin);
    printf("ENetr the string2:");
    //scanf("%s",dest);
    fgets(dest,20,stdin);
    strcat(dest,str);
    /printf("the conact   %s",dest);
    puts(dest);

 
 
    return 0;
}

