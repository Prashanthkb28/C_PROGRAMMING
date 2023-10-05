/* Documentation
Name: PRASHANTH KB
Date: 24/08/2023
Description:WAP to find the power of 2 series
sample Input:
Sample Output:
*/
 #include<stdio.h>
int main()
{
    int n ,power=1;
    printf("Enter the number upto which power series do you want:");
    scanf("%d",&n);
    if (n>0)
      {
       for(int i=1;i<=n;i++)
        {
            printf("%d",power);
            power=power*2;
        }
      }
    else
        printf("ERROR:number should be positive number");
    return 0;
}

