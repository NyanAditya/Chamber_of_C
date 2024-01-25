// A program to reverse the string.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];

    printf("Enter the string: ");
    gets(str);

    int len = strlen(str);
    char *ptr = str + len - 1;

    while (len > 0)
    {
        printf("%c", *ptr);
        ptr--;
        len--;
    }

return 0;
}