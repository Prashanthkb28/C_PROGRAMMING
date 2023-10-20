/* Documentation
Name: PRASHANTH KB
Date: 2/10/2023
Description: To print the student record
sample Input:
Sample Output:
*/

struct student
{
    char name[20];
    int Phy_marks;
    int chem_marks;
    int math_marks;
    float average;
};
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
       float math_avg=0,phy_avg=0,chem_avg=0;
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of student : ");
        scanf("%s",s[i].name);
        printf("Enter P, C and M marks : ");
        scanf("%d %d %d",&s[i].Phy_marks,&s[i].chem_marks,&s[i].math_marks);
        math_avg=(math_avg+s[i].math_marks);
        phy_avg=(phy_avg+s[i].Phy_marks);
        chem_avg=(chem_avg+s[i].chem_marks);
    }
    math_avg=math_avg/(float)n;
    phy_avg=phy_avg/(float)n;
    chem_avg=chem_avg/(float)n;
    printf("----------------------------------------------------------------");
    printf("\nName\t\tMaths\t\tPhysics\t\tChemistry\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t %d\t\t %d\n",s[i].name,s[i].math_marks,s[i].Phy_marks,s[i].chem_marks);
    }
    printf("\n-----------------------------------------------------------------\n");
    printf("\nAverage\t %.2f\t%.2f\t%.2f",math_avg,phy_avg,chem_avg);
   
    
}

