#include <stdio.h>
#include <stdlib.h>

// Structure to represent a term in the polynomial
typedef struct Term {
    int coefficient;
    int exponent;
    struct Term *next;
} Term;

typedef Term* Polynomial; // Polynomial is a pointer to the first Term

// Function to create a new term
Term* createTerm(int coeff, int exp) {
    Term* newTerm = (Term*)malloc(sizeof(Term));
    if (newTerm == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    newTerm->coefficient = coeff;
    newTerm->exponent = exp;
    newTerm->next = NULL;
    return newTerm;
}

// Function to insert a term into a polynomial (assuming terms are added in descending order of exponent)
void insertTerm(Polynomial *poly, int coeff, int exp) {
    if (coeff == 0) return; // Don't add terms with zero coefficients

    Term* newTerm = createTerm(coeff, exp);
    if (*poly == NULL || exp > (*poly)->exponent) { // Insert at the beginning or if exponent is higher
        newTerm->next = *poly;
        *poly = newTerm;
    } else {
        Term* current = *poly;
        while (current->next != NULL && current->next->exponent > exp) {
            current = current->next;
        }
        newTerm->next = current->next;
        current->next = newTerm;
    }
}

// Function to create a polynomial from user input
Polynomial createPolynomial() {
    Polynomial poly = NULL;
    int coeff, exp;
    printf("Enter polynomial terms (coefficient exponent), enter 0 0 to finish:\n");
    while (1) {
        printf("Term (coeff exp): ");
        if (scanf("%d %d", &coeff, &exp) != 2 || (coeff == 0 && exp == 0)) {
            break; // Exit loop if input is invalid or 0 0 is entered
        }
        insertTerm(&poly, coeff, exp);
    }
    return poly;
}

// Function to display a polynomial
void displayPolynomial(Polynomial poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }
    Term* current = poly;
    while (current != NULL) {
        if (current != poly && current->coefficient > 0) {
            printf(" + ");
        } else if (current != poly && current->coefficient < 0) {
            printf(" - ");
        }
        if (current->exponent == 0 || abs(current->coefficient) != 1) { // Don't print coefficient if it's 1 and exponent is not 0
            printf("%d", abs(current->coefficient));
        } else if (current->coefficient == -1) {
            printf("-");
        }

        if (current->exponent > 0) {
            printf("x");
            if (current->exponent > 1) {
                printf("^%d", current->exponent);
            }
        }
        current = current->next;
    }
    printf("\n");
}

// Function to add two polynomials
Polynomial addPolynomials(Polynomial poly1, Polynomial poly2) {
    Polynomial resultPoly = NULL;
    Term* p1 = poly1;
    Term* p2 = poly2;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exponent > p2->exponent) {
            insertTerm(&resultPoly, p1->coefficient, p1->exponent);
            p1 = p1->next;
        } else if (p2->exponent > p1->exponent) {
            insertTerm(&resultPoly, p2->coefficient, p2->exponent);
            p2 = p2->next;
        } else { // Exponents are equal
            int sumCoeff = p1->coefficient + p2->coefficient;
            if (sumCoeff != 0) {
                insertTerm(&resultPoly, sumCoeff, p1->exponent);
            }
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    // Add remaining terms from poly1, if any
    while (p1 != NULL) {
        insertTerm(&resultPoly, p1->coefficient, p1->exponent);
        p1 = p1->next;
    }

    // Add remaining terms from poly2, if any
    while (p2 != NULL) {
        insertTerm(&resultPoly, p2->coefficient, p2->exponent);
        p2 = p2->next;
    }

    return resultPoly;
}

Polynomial mulPolynomial(Polynomial poly1, Polynomial poly2) {
    Polynomial resultPoly = NULL;
    Term* p1 = poly1;
    Term* p2 = poly2;

    while (p1 != NULL){
        p2 = poly2;
        while (p2 != NULL){
            int mulCoeff = p1->coefficient * p2->coefficient;
            int mulExp = p1->exponent + p2->exponent;

            insertTerm(&resultPoly, mulCoeff, mulExp);
            p2 = p2->next;
        }
        p1 = p1->next;
    }

    return resultPoly;
}


// Function to free the memory allocated for a polynomial
void freePolynomial(Polynomial poly) {
    Term* current = poly;
    Term* nextTerm;
    while (current != NULL) {
        nextTerm = current->next;
        free(current);
        current = nextTerm;
    }
}

int main() {
    printf("Create Polynomial 1:\n");
    Polynomial poly1 = createPolynomial();
    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("\nCreate Polynomial 2:\n");
    Polynomial poly2 = createPolynomial();
    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    printf("\nSum of Polynomials: ");
    Polynomial sumPoly = addPolynomials(poly1, poly2);
    displayPolynomial(sumPoly);

    printf("\nMultiplication of Polynomials: ");
    Polynomial mulPoly = mulPolynomial(poly1, poly2);
    displayPolynomial(mulPoly);

    // Free allocated memory
    freePolynomial(poly1);
    freePolynomial(poly2);
    freePolynomial(sumPoly);
    freePolynomial(mulPoly);

    return 0;
}