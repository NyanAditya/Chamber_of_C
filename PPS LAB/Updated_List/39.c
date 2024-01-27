// 39. WAP to print pattern

#include <stdio.h>

int main(){

    printf("Enter the style of pattern:\n");
    printf("1. Star Pattern\n");
    printf("2. Alphabet Pattern\n");
    printf("3. Number Pattern\n");

    int choice; scanf("%d", &choice);

    printf("Enter the number of rows: ");
    int rows; scanf("%d", &rows);
    char buffer[rows+1];

    switch (choice){
        case 1:
            for (int i=1; i<=rows; i++){
                for (int j=1; j<=i; j++)    printf("*");
                printf("\n");
            }

            break;

        case 2:
            int temp_var = rows;
            char format[26]; 

            for (int i=0; i<rows; i++){
                sprintf(format, "%c%dc", 37, temp_var--); // format = "%<temp_var>c" (eg. "%5c")
                // for (int j=0; j<rows-i-1; j++) printf(" ");
                printf(format, ' ');

                for (int j=65+i; j>=65; j--){
                    printf("%c", j);
                }

                printf("\n");
            }
            
            break;

        case 3:
            for (int i=1; i<=rows; i++){

                for (int j=1; j<i; j++) printf(" "); // print spaces

                for (int j=rows; j>=i; j--) printf("%d", j);

                printf("\n");
            }
            
            break;


        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
    