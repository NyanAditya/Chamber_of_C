// 37.	Write a program to compare the contents of two files and determine whether they are  the same or not

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fpr1, *fpr2;
    char path1[255], path2[255]; // Max path length in Win11 is 256

    printf("Enter the path of first file: ");
    gets(path1);
    printf("Enter the path of second file: ");
    gets(path2);

    fpr1 = fopen(path1, "r");
    fpr2 = fopen(path2, "r");

    if(fpr1 == NULL || fpr2 == NULL){
        printf("Error in opening file(s): %s\n", (path1 == NULL) ? ((path2 == NULL) ? "Both" : path1) : path2);
        exit(1);
    }

    char ch1, ch2;
    while(1){
        // pointer moves to next character after reading and returns the current character, hence we loop till EOF
        ch1 = fgetc(fpr1);
        ch2 = fgetc(fpr2);

        if(ch1 == EOF || ch2 == EOF){
            if(ch1 == EOF && ch2 == EOF){
                printf("Both files are same\n");
            }
            else{
                printf("Both files are not same\n");
            }
            break;
        }

        if(ch1 != ch2){
            printf("Both files are not same\n");
            break;
        }
    }

    fclose(fpr1);
    fclose(fpr2);

    return 0;
}