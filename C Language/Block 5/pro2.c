//Write a program to create a structure of student’s roll_no and name and display the records.
#include <stdio.h>
struct student 
    {
        int roll_no;
        char name[20];
    };
    
    int main() 
    {
        struct student s;
        printf("Enter student roll number: ");
        scanf("%d", &s.roll_no);
        printf("Enter student name: ");
        scanf("%s", s.name);
        printf("\n--- Student Info ---\n");
        printf("Roll Number: %d\n", s.roll_no);
        printf("Name: %s\n", s.name);

        return 0;
    }
