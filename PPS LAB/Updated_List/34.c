/* 34.	Create structure data type name ADDRESS;- The type contains city: string type,  pincode: type integer.
Create structure data type name EMPLOYEE;- The type contains name: string type. Display all the information of the Employee using concept of nested structure. */

#include <stdio.h>

struct address
{
    char city[25];
    int pincode;
};

struct employee
{
    char name[25];
    struct address addr;
};

int main()
{
    struct employee e;

    printf("Enter the details of the employee:\n");

    printf("Name: ");
    gets(e.name);

    printf("City: ");
    gets(e.addr.city);

    printf("Pincode: ");
    scanf("%d", &e.addr.pincode);

    printf("\n");

    printf("Details of the employee:\n");

    printf("Name: %s\n", e.name);
    printf("City: %s\n", e.addr.city);
    printf("Pincode: %d\n", e.addr.pincode);

    return 0;
}
