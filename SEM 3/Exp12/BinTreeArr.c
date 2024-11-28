// Program to implement a binary tree using an array

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int tree[MAX];

void insert(int val)
{
    int i = 0;
    while (tree[i] != 0)
    {
        if (val < tree[i])
        {
            i = 2 * i + 1;
        }
        else
        {
            i = 2 * i + 2;
        }
    }
    tree[i] = val;
}

void inorder(int i)
{
    if (tree[i] != 0)
    {
        inorder(2 * i + 1);
        printf("%d ", tree[i]);
        inorder(2 * i + 2);
    }
}

void preorder(int i)
{
    if (tree[i] != 0)
    {
        printf("%d ", tree[i]);
        preorder(2 * i + 1);
        preorder(2 * i + 2);
    }
}

void postorder(int i)
{
    if (tree[i] != 0)
    {
        postorder(2 * i + 1);
        postorder(2 * i + 2);
        printf("%d ", tree[i]);
    }
}

int main()
{
    int choice, val;

    printf("\n1. Insert");
    printf("\n2. Inorder");
    printf("\n3. Preorder");
    printf("\n4. Postorder");
    printf("\n5. Exit");
    printf("\nEnter your choice: ");

    while (1)
    {

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted: ");
            scanf("%d", &val);
            insert(val);
            break;
        case 2:
            inorder(0);
            break;
        case 3:
            preorder(0);
            break;
        case 4:
            postorder(0);
            break;
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    }

    return 0;
}
