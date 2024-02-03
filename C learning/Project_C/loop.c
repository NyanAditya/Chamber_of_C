#include<stdio.h>

#include<string.h>

int main()

{

  char a[] = "hell";

  char b[] = "hello";

 

  strcpy(b, a);

  strcpy(a, b);

  printf("%s, %s", a, b);

}