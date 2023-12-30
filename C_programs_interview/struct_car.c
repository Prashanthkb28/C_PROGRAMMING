/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description: define a struct called car . its members contain brand model and year . your task is to sort the strcuture based on the year of manufacture
sample Input:
Sample Output:
*/

#include<stdio.h>
struct car
{
    char model[30];
    char brand[30];
    int year;
};
void  swap(struct car *a, struct car *b)
{
    struct car temp = *a;
    *a = *b;
    *b = temp;
}
void sort(struct car cars[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(cars[j].year > cars[j+1].year)
            {
                swap(&cars[j],&cars[j+1]);
            }
        }
    }
}

int main()
{
  int n ;
  printf("ENter the number of cars : ");
  scanf("%d",&n);
      
    struct car cars[n];
    printf("Enter the %d cars details :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d car details :",i+1);
        printf(" brand model year :");
        scanf("%s %s %d",cars[i].brand,cars[i].model,&cars[i].year);
    }
    // sort
    sort(cars,n);
    // print
    for(int i=0;i<n;i++)
    {
        printf("Brand : %s , Model : %s , Year : %d \n",cars[i].brand,cars[i].model,cars[i].year);
    }


    return 0;
}

