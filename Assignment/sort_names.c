/* Documentation
Name: PRASHANTH KB
Date: 29/10/2023
Description: Read n and n person names of maximum length 20 sort and print the names
sample Input:
Enter the size: 5
Enter the 5 names of length max 20 characters in each
[0] -> Delhi
[1] -> Agra
[2] -> Kolkata
[3] -> Bengaluru
[4] -> Chennai

Sample output:
The sorted names are:
Agra
Bengaluru
Chennai
Delhi
Kolkata
*/

#include<stdio.h>
#include<stdlib.h>
void swap( char *, char * );                       // function prototype to swap
void sort_name( char (*arr)[], int n );            // function to sort the names

int main()
{
    int n;
    printf("Enter the size: ");                    // enter the number of persons
    scanf("%d",&n);
    char (*arr)[20];                                // pointer to array

    arr = malloc( n * sizeof(char[20]) );           // dynamic memory allocation 

    printf("Enter the %d names of length of max 20 characters in each\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",arr[i]);                        // enter the names
    }

    sort_name(arr,n);                              // function call

    printf("The sorted names are:\n");
    for(int i=0; i<n ;i++)
    {
        printf("%s\n",arr[i]);                    // print the sorted names
    }

    free(arr);                                  // free the memory
    return 0;
}
/* function definition to sort the names */
void sort_name( char (*arr)[20], int n)                   
 {
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n-1; j++)
         {
             if( *arr[j] > *arr[j+1] )          // compare the string
             {
                 swap( arr[j],arr[j+1] );       // call swap string function
             }
             int count =0;
             while( arr[j][count] == arr[j+1][count] )   //compare the characters at the same position
             {
                 count++;
                 if( (arr[j][count]) > (arr[j+1][count] ) )   // compare
                 {
                     swap( arr[j],arr[j+1]);
                     break;
                 }
             }
         }
     }
 }

/* function to swap the string*/
void swap( char *arr1, char *arr2)
{
    for(int i=0; i<20; i++)
    {
        char temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
