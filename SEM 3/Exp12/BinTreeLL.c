// Program to implement a binary tree using a linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void insert(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    if (root == NULL)
    {
        root = newNode;
    }
    else
    {
        struct node *temp = root;
        while (1)
        {
            if (val < temp->data)
            {
                if (temp->left == NULL)
                {
                    temp->left = newNode;
                    break;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            {
                if (temp->right == NULL)
                {
                    temp->right = newNode;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
}

void inorder(struct node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->left);
        printf("%d ", temp->data);
        inorder(temp->right);
    }
}

void preorder(struct node *temp)
{
    if (temp != NULL)
    {
        printf("%d ", temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

void postorder(struct node *temp)
{
    if (temp != NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ", temp->data);
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
            printf("\nInorder traversal is: ");
            inorder(root);
            break;
        case 3:
            printf("\nPreorder traversal is: ");
            preorder(root);
            break;
        case 4:
            printf("\nPostorder traversal is: ");
            postorder(root);
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}
