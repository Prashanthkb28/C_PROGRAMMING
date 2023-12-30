/* Documentation

Name: PRASHANTH KB
Date: 2/09/2023
Description
sample Input:
Sample Output:
*/

#include<stdio.h>
int main()
{
 //char *ptr;
 //ptr="%d\n";
 //printf(ptr,300);
 
int val;
char eval;
void *ptr;
val=30;
eval=65;
ptr=&val;
printf("value=%d,size=%zu",*(int *)ptr,sizeof(ptr));
ptr=&eval;
printf("value=%d,size=%zu\n",*(char *)ptr,sizeof(ptr));
void *iptr;
++iptr;
printf("%ls",(unsigned *)iptr);

    return 0;
}

