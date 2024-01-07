#include<stdio.h>

void main()
{
test();
test();
test();
}

void test()
{
static int k=10;
printf("%d\n", k); k++;
}
