// Write a program to print the given pattern (diamond)

#include <stdio.h>

int main(){

    printf("Enter the number of rows: ");
    int rows; scanf("%d", &rows);

    // Upper half with base
    for (int i=1; i<=rows; i++){
        
        for (int j=rows-i; j>0; j--)    printf(" ");

        for (int j=1; j<=2*i-1; j++)    printf("*");


        printf("\n");
    }

    // Lower half without base
    for (int i=rows-1; i>=1; i--){
        
        for (int j=rows-i; j>0; j--)    printf(" ");

        for (int j=1; j<=2*i-1; j++)    printf("*");


        printf("\n");
    }

    return 0;
}