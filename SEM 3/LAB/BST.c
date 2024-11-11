// Program to implement Binary Search Tree

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void createNode(struct node **root, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    *root = newNode;
}

void insert(struct node *root, int data)
{
    if (root->data > data)
    {
        if (root->left == NULL)
        {
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = data;
            newNode->left = NULL;
            newNode->right = NULL;
            root->left = newNode;
        }
        else
        {
            insert(root->left, data);
        }
    }

    else
    {
        if (root->right == NULL)
        {
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = data;
            newNode->left = NULL;
            newNode->right = NULL;
            root->right = newNode;
        }
        else
        {
            insert(root->right, data);
        }
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int search(struct node *root, int data)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == data)
    {
        return 1;
    }
    if (root->data > data)
    {
        return search(root->left, data);
    }
    else
    {
        return search(root->right, data);
    }
}

void display(struct node *root)
{
    printf("Inorder: ");
    inorder(root);
    printf("\nPreorder: ");
    preorder(root);
    printf("\nPostorder: ");
    postorder(root);
    printf("\n");
}

void delete(struct node *root, int data)
{
    struct node *temp = root;
    struct node *parent = NULL;
    while (temp != NULL && temp->data != data)
    {
        parent = temp;
        if (temp->data > data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    if (temp == NULL)
    {
        printf("Element not found\n");
        return;
    }
    if (temp->left == NULL && temp->right == NULL)
    {
        if (parent->left == temp)
        {
            parent->left = NULL;
        }
        else
        {
            parent->right = NULL;
        }
        free(temp);
    }
    else if (temp->left == NULL || temp->right == NULL)
    {
        struct node *child = temp->left == NULL ? temp->right : temp->left;
        if (parent->left == temp)
        {
            parent->left = child;
        }
        else
        {
            parent->right = child;
        }
        free(temp);
    }
    else
    {
        struct node *successor = temp->right;
        parent = temp;
        while (successor->left != NULL)
        {
            parent = successor;
            successor = successor->left;
        }
        temp->data = successor->data;
        if (parent->left == successor)
        {
            parent->left = successor->right;
        }
        else
        {
            parent->right = successor->right;
        }
        free(successor);
    }
}

int main()
{
    struct node *root = NULL;
    createNode(&root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 3);
    insert(root, 7);
    insert(root, 12);
    insert(root, 18);
    display(root);
    printf("Search 7: %d\n", search(root, 7));
    printf("Search 8: %d\n", search(root, 8));
    delete (root, 7);
    display(root);
    return 0;
}