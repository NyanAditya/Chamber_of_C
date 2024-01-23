// A program to implement strlen ( ), strcat ( ), strcpy ( )  without using the string library Functions.

#include <stdio.h>

int Zstrlen(char *s)
{
    int i = 0;

    while (s[i] != '\0')
        i++;

    return i;
}

void Zstrcpy(char *s1, char *s2)
{
    int i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }

    s1[i] = '\0';
}

void Zstrcat(char *s1, char *s2)
{
    int i = 0, j = 0;

    while (s1[i] != '\0')
        i++;

    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';
}

int main()
{
    char s1[100], s2[100];

    printf("Enter 1st the string: ");
    gets(s1);

    printf("Enter 2nd the string: ");
    gets(s2);

    printf("Length of the 1st string: %d\n", Zstrlen(s1));
    printf("Length of the 2nd string: %d\n", Zstrlen(s2));

    
    Zstrcat(s1, s2);
    printf("Concatenated string: %s\n", s1);

    Zstrcpy(s2, s1);
    printf("Copied string: %s\n", s2);


    return 0;
}