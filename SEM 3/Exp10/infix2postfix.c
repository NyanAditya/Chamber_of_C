// program to evaluate postfix expression

#include <stdio.h>
#include <ctype.h>

#define STACKSIZE 100

typedef struct {
    char items[STACKSIZE];
    int top;
} Stack;

int isEmpty(Stack *s) {
    return s->top == -1;
}

void initStack (Stack *s) {
    s->top = -1;
}

void push(Stack *s, char item) {
    s->items[++s->top] = item;
}

char pop(Stack *s) {
    return s->items[s->top--];
}

char peek(Stack *s) {
    return s->items[s->top];
}

int precidence(char op) {
    switch(op) {
        case '^':
            return 3;

        case '*':
        case '/':
            return 2;

        case '+':
        case '-':
            return 1;

        default:
            return 0;
    }
}

void infix2postfix(char *infix, char *postfix) {
    Stack stk;
    initStack(&stk);

    char ch;
    int j=0;

    for(int i=0; infix[i]; i++) {
        ch = infix[i];

        if (isalnum(ch)) {
            postfix[j++] = ch;
        }

        else if (ch == '(') {
            push(&stk, ch);
        }

        else if (ch == ')') {
            while (!isEmpty(&stk) && peek(&stk) != '(') {
                postfix[j++] = pop(&stk);
            }
        }

        else {
            while (!isEmpty(&stk) && precidence(peek(&stk)) >= precidence(ch)) {
                postfix[j++] = pop(&stk);
            }
            push(&stk, ch);
        }

        
        
    }

    while (!isEmpty(&stk)) {
        postfix[j++] = pop(&stk);
    }
    
    postfix[j] = '\0';
}

int main() {
    char infix[STACKSIZE], postfix[STACKSIZE];

    printf("Infix Expression: ");
    scanf("%s", infix);

    infix2postfix(infix, postfix);

    printf("Postfix: %s", postfix);

    return 0;
}
