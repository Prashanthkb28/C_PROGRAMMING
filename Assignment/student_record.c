/* Documentation-----------------------------------------------------------------------------------------------
Name: PRASHANTH KB
Date: 2/10/2023
Description
sample Execution :
Enter the number of students: 2
Enter the number of subjects: 2
Enter the name of subject 1: maths
Enter the name of subject 2: hindi
----------------Enter the student details--------------------
Enter the student 1 Roll number: 101
Enter the Student 1 name :raju
Enter the maths marks: 89
Enter the hindi marks: 98
----------------Enter the student details--------------------
Enter the student 2 Roll number: 102
Enter the Student 2 name :kiran
Enter the maths marks: 3
Enter the hindi marks: 4
------------------------------Display Menu----------------------------
1.All student details
2.Particular student deatils
Enter your choice: 1
-----------------------------------All student details-----------------------------------------
Roll number	Name				maths				hindi				Average		Grade
101		raju				89  				98  				93.5		A
102		kiran				3   				4   				3.5 		F
DO you want to continue to display(Y/n)
y
------------------------------Display Menu----------------------------
1.All student details
2.Particular student deatils
Enter your choice: 2
------------------particular student details------------------------------------------
1.Roll number
2.Student name
-----------------------------------------------------------------------------------------------------------------*/
// structure definition
struct student
{
    int roll_no;
    char name[20];
    float average;
    char grade;
};
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>


int main()
{
    int no_stud, no_sub;
    float total_marks;
    char ch1, ch2;
  
  // read the number of students from user
    printf("Enter the number of students: ");
    scanf("%d",&no_stud);
    struct student s[no_stud];  // declaring structure variable
  // read the number of subjects from user
    printf("Enter the number of subjects: ");
    scanf("%d",&no_sub);
    char sub[no_sub][10];
    int marks[no_stud][no_sub];
  // read the subject name from user 
    for(int i=0;i<no_sub;i++)     
    {
        printf("Enter the name of subject %d: ",i+1);
        __fpurge(stdin);
        scanf("%s",sub[i]);
    }
    // read the student details from user
    for(int i=0;i<no_stud;i++)
    {
        printf("----------------Enter the student details--------------------\n");
        printf("Enter the student %d Roll number: ",i+1);
        __fpurge(stdin);
        scanf("%d",&s[i].roll_no);
        printf("Enter the Student %d name :",i+1);
        __fpurge(stdin);
        scanf("%s",s[i].name);
        total_marks=0;
        for(int j=0;j<no_sub;j++)
        {
            printf("Enter the %s marks: ",sub[j]);
            scanf("%d",&marks[i][j]);
            total_marks += marks[i][j];                    // calculating student total marks 
        }
        s[i].average = total_marks / no_sub;               // calculating the average marks
        // Assigning the GRADES based on average marks
        if (s[i].average >= 90) {
            s[i].grade = 'A';
        } else if (s[i].average >= 80) {
            s[i].grade = 'B';
        } else if (s[i].average >= 70) {
            s[i].grade = 'C';
        } else if (s[i].average >= 60) {
            s[i].grade = 'D';
        } else {
            s[i].grade = 'F';
        }    
    }
do
{    
  printf("------------------------------Display Menu----------------------------\n");
  printf("1.All student details\n2.Particular student deatils\n");
  int choice;
  printf("Enter your choice: ");
  scanf("%d",&choice);                                  // read the choice from user
  switch(choice)
  {
      case 1:                                       // printing ALL students deatils
          printf("-----------------------------------All student details-----------------------------------------\n");
          printf("Roll number\tName\t\t");
          for(int j=0;j<no_sub;j++)
          {
              printf("\t\t%s\t\t",sub[j]);
          }
          printf("\t\tAverage\t\tGrade\n");
          for(int i=0;i<no_stud;i++)
          {

              printf("%d\t\t%s\t\t",s[i].roll_no,s[i].name);
          
          for(int j=0;j<no_sub;j++)
          {
              printf("\t\t%-4d\t\t",marks[i][j]);
          }
          printf("\t\t%-4g\t\t%c\n",s[i].average,s[i].grade);
          }
          break;
    do
    {
      case 2:                                       // printing particular student details
          printf("------------------particular student details------------------------------------------\n");
          printf("1.Roll number\n2.Student name\n");
          int option;
          printf("Enter your option: ");
          scanf("%d",&option);                   // read the option from user
          int num;
          char student_name[20];
          switch(option)
          {
              case 1:                            // print based on roll number
                  {
                 // int num;
                  printf("Enter the student roll number: ");
                  scanf("%d",&num);                    // read the student roll number from user
                  int display=0;
                  for(int i=0;i<no_stud;i++)
                  {
                     // comparing the roll number with user entered roll number 
                     if(num==s[i].roll_no)
                     {
                        display=1;      // keep track to display details
                        printf("Roll number\tName\t\t");
                        for(int j=0;j<no_sub;j++)
                        {
                            printf("\t\t%s\t\t",sub[j]);
                        }
                        printf("\t\tAverage\t\tGrade\n");
                     

                            printf("%d\t\t%s\t\t",s[i].roll_no,s[i].name);
          
                             for(int j=0;j<no_sub;j++)
                              {
                                printf("\t\t%-4d\t\t",marks[i][j]);
                               }
                            printf("\t\t%-4g\t\t%c\n",s[i].average,s[i].grade);
                        }
                  }
                  if(display==0)
                      printf("No such roll_number found in student details record...!\n");
                  }
                  break;
              case 2:                         // printing the based on student name
                  {
                  //char student_name;
                  printf("Enter the student name: ");
                  __fpurge(stdin);
                  scanf("%s",student_name);
                  int display1=0;             // variable to keep track to print
                  for(int i=0;i<no_stud;i++)
                  {
                      if(strcmp(student_name,s[i].name)==0) // comparision of student name with user entered student name
                         {
                             display1=1;
                           
                            printf("Roll number\tName\t\t");
                            for(int j=0;j<no_sub;j++)
                             {
                                 printf("\t\t%s\t\t",sub[j]);
                             }
                            printf("\t\tAverage\t\tGrade\n");
             
                          printf("%d\t\t%s\t\t",s[i].roll_no,s[i].name);
          
                          for(int j=0;j<no_sub;j++)
                           {
                              printf("\t\t%-4d\t\t",marks[i][j]);
                           }
                           printf("\t\t%-4g\t\t%c\n",s[i].average,s[i].grade);
                         }
                   }
                   if(display1==0)
                     printf("No such name in student record...!\n");
                  }
                   break;
              default:printf("!...PLEASE Enter the valid option...!\n");
          }
    
    printf("Do you want to continue to display(y/n)\n");
    __fpurge(stdin);
    scanf("%c",&ch2);
    }while(ch2!='n');
      default:printf("!....PLEASE Enter a valid choice...!\n");
  }
  printf("DO you want to continue to display(Y/n)\n");
  __fpurge(stdin);
  scanf("%c",&ch1);
}while(ch1!='n');


    return 0;
}

