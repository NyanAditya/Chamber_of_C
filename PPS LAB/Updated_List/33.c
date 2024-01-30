// 32.	Define a structure data type name STUDENT. The type contains student id: string type, student name: type string, student age:type integer, total marks: float type. 
// Display all the record of the student.

#include <stdio.h>

struct student
{
    char id[20];
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct student s;
    
    printf("Enter the id of the student: ");
    scanf("%s", s.id);
    printf("Enter the name of the student: ");
    scanf("%s", s.name);
    printf("Enter the age of the student: ");
    scanf("%d", &s.age);
    printf("Enter the marks of the student: ");
    scanf("%f", &s.marks);
    
    printf("\n\n");
    printf("The id of the student is: %s\n", s.id);
    printf("The name of the student is: %s\n", s.name);
    printf("The age of the student is: %d\n", s.age);
    printf("The marks of the student is: %.2f\n", s.marks);
    
    return 0;
}