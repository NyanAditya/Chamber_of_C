/*32.	Define a structure data type name STUDENT. The type contains student id: string type, student name: type string,
student age:type integer, total marks: float type.
Display all the record of the n students using array structure */

#include <stdio.h>

struct student
{
    char id[15];
    char name[25];
    int age;
    float marks;
};

int main()
{
    int n;
    printf("Enter no. of students:");
    scanf("%d", &n);

    struct student s[n];

    

    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of student %d:\n", i + 1);

        getchar();
        printf("ID: ");
        scanf("%s", &s[i].id);

        printf("Name: ");
        gets(s[i].name);
        getchar();

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Details of student %d:\n", i + 1);
        printf("ID: %s\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Marks: %0.2f\n", s[i].marks);

        printf("\n");
    }

    return 0;
}