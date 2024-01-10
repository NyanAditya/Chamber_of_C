#include<stdio.h>

int main(int argc, char const *argv[])
{
    float r;

    printf("Enter Radius: ");
    scanf("%f", &r);

    printf("Area: %f\n", 3.14159*r*r);
    printf("Circumference: %f", 2*3.14159*r);
    return 0;
}
