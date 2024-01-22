#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";

    // Concatenate str2 to str1
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Copy str1 to str2
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    // Get the length of str1
    int length = strlen(str1);
    printf("Length of str1: %d\n", length);

    // Compare str1 and str2
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("str1 and str2 are equal\n");
    } else if (result < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }

    // Find the first occurrence of 'o' in str1
    char *ptr = strchr(str1, 'o');
    if (ptr != NULL) {
        printf("Found 'o' at position: %ld\n", ptr - str1);
    } else {
        printf("Character 'o' not found\n");
    }

    // Find the last occurrence of 'l' in str1
    ptr = strrchr(str1, 'l');
    if (ptr != NULL) {
        printf("Found last 'l' at position: %ld\n", ptr - str1);
    } else {
        printf("Character 'l' not found\n");
    }

    // Find the first occurrence of str2 in str1
    ptr = strstr(str1, str2);
    if (ptr != NULL) {
        printf("Found str2 in str1 at position: %ld\n", ptr - str1);
    } else {
        printf("str2 not found in str1\n");
    }

    // Convert str1 to uppercase
    // for (int i = 0; str1[i] != '\0'; i++) {
    //     str1[i] = toupper(str1[i]);
    // }
    printf("Uppercase str1: %s\n", strupr(str1));

    // Convert str2 to lowercase
    // for (int i = 0; str2[i] != '\0'; i++) {
    //     str2[i] = tolower(str2[i]);
    // }
    printf("Lowercase str2: %s\n", strlwr(str2));

    return 0;
}
