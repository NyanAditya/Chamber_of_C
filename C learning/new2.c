#include <stdio.h>

void myshow(int *); void main() { int a=10; printf("%d ", a); myshow(&a); printf("%d", a); } void myshow(int *k) { *k=20; }