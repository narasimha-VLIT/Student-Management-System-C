#include <stdio.h>
int main()
{
char studentname[50];
int rollNo;
int C, python, Java, English, maths, physics, chemistry;
int total;
float average;
int choice = 0;
while(choice!=3)
{

printf("===== STUDENT MANAGEMENT SYSTEM =====\n");  
printf("1. Add Student\n");  
printf("2. Calculate Result\n");  
printf("3. Exit\n");  

printf("\nEnter your choice: ");  
scanf("%d", &choice);  

switch(choice)  
      
{  
    case 1:  
        printf("\nEnter Student Name: ");  
        scanf("%s", studentname);  

        printf("Enter Roll Number: ");  
        scanf("%d", &rollNo);  

        printf("Enter C Marks: ");  
        scanf("%d", &C);  

        printf("Enter Python Marks: ");  
        scanf("%d", &python);  

        printf("Enter Java Marks: ");  
        scanf("%d", &Java);  

        printf("Enter English Marks: ");  
        scanf("%d", &English);  

        printf("Enter Maths Marks: ");  
        scanf("%d", &maths);  

        printf("Enter Physics Marks: ");  
        scanf("%d", &physics);  

        printf("Enter Chemistry Marks: ");  
        scanf("%d", &chemistry);  

        total = C + python + Java + English + maths + physics + chemistry;  
        average = total / 7.0;  

        printf("\n===== STUDENT RESULT =====");  
        printf("\nStudent Name: %s", studentname);  
        printf("\nRoll Number: %d", rollNo);  
        printf("\nTotal Marks: %d", total);  
        printf("\nAverage: %.2f", average);  

        if (average >= 40)  
        {  
            printf("\nResult: Pass");  
        }  
        else  
        {  
            printf("\nResult: Fail");  
        }  

        if (average >= 90)  
        {  
            printf("\nGrade: A");  
        }  
        else if (average >= 75)  
        {  
            printf("\nGrade: B");  
        }  
        else if (average >= 60)  
        {  
            printf("\nGrade: C");  
        }  
        else if (average >= 50)  
        {  
            printf("\nGrade: D");  
        }  
        else  
        {  
            printf("\nGrade: Fail");  
        }  

        break;  

    case 2:  
        printf("\nCalculate Result selected.");  
        break;  

    case 3:  
        printf("\nThank you!");  
        break;  

    default:  
        printf("\nInvalid choice!");  
}  
  
   
    }  

return 0;

}
