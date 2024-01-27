// 38.	Write a program to check whether a given word exists in a file or not. If yes then find the number of times it occurs.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char path[255], target_word[100];

    printf("Enter the path of the file: ");
    gets(path);

    printf("Enter the word to be searched: ");
    scanf("%s", &target_word);

    fp = fopen(path, "r");

    if (fp == NULL){
        printf("File not found!");
        exit(1);
    }

    char current_word[100];
    int ch, i=0;

    int word_counter = 0;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ' || ch == '\n')
        {
            current_word[i] = '\0';
            i = 0;
            if (!(strcmp(target_word, current_word ))) word_counter++;
        }

        else
        {
            current_word[i] = ch;
            i++;
        }
    }

    if (word_counter == 0) printf("Word not found!\n");
    else printf("Word found %d times\n", word_counter);

    fclose(fp);

    return 0;
}