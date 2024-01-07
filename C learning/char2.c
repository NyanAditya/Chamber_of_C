#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch= 'a', ch1 = 'A';
    printf("ASCII code of %c & %c is %d & %d\n", ch, ch1, ch, ch1);
    
    printf("%c + %c = %c\n", ch, ch1, ch+ch1);
    printf("ASCII code of %c is %d\n", ch+ch1, ch+ch1);
    
    return 0;
}