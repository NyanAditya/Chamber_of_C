// program to convert infix expression to postfix expression

#include <stdio.h>
#include <stdlib.h>

#define arrMaxSize 100

int stack[arrMaxSize];
int top = -1;

void push(int value)
{
    if (top == arrMaxSize - 1)
    {
        printf("Stack Overflow\n");
        exit(1);
    }

    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

int isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int apply_operator(char operator, int op1, int op2)
{
    switch (operator)
    {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '/':
        if (op2 == 0)
        {
            printf("Division by zero error\n");
            exit(1);
        }
        return op1 / op2;

    default:
        printf("Invalid Operator: %c\n", operator);
        exit(1);
    }
}
int evaluate_postfix(char *expression)
{
    for (int i = 0; expression[i] != '\0'; i++)
    {
        char token = expression[i];

        if (isspace(token))
        {
            continue; // Skip spaces
        }
        else if (isdigit(token))
        {
            push(token - '0'); // Convert char digit to int and push
        }
        else if (isOperator(token))
        {
            int op2 = pop();
            int op1 = pop();
            int result = apply_operator(token, op1, op2);
            push(result);
        }
        else
        {
            printf("Invalid character in expression: %c\n", token);
            exit(1);
        }
    }

    return pop(); // Final result
}

int main()
{
    char expression[arrMaxSize];

    printf("Enter a postfix expression: ");
    fgets(expression, arrMaxSize, stdin);

    int result = evaluate_postfix(expression);
    printf("Result: %d\n", result);

    return 0;
}