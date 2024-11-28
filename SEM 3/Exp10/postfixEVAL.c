// Program to evaluate a postfix expression

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];

int top = -1;

void push(int val)
{
    if (top == MAX - 1)
    {
        printf("\nStack is full");
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

int pop()
{
    int val = -1;
    if (top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        val = stack[top];
        top--;
    }
    return val;
}

int main()
{
    char postfix[100];
    int i = 0, a, b, result;
    printf("\nEnter the postfix expression: ");
    gets(postfix);
    while (postfix[i] != '\0')
    {
        if (postfix[i] >= '0' && postfix[i] <= '9')
        {
            push(postfix[i] - '0');
        }
        else
        {
            a = pop();
            b = pop();
            switch (postfix[i])
            {
            case '+':
                result = b + a;
                break;
            case '-':
                result = b - a;
                break;
            case '*':
                result = b * a;
                break;
            case '/':
                result = b / a;
                break;
            }
            push(result);
        }
        i++;
    }
    printf("\nThe result of the postfix expression is: %d", pop());
    return 0;
}