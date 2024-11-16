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
    else if (root->data == data)
    {
        return 1;
    }
    else if (root->data > data)
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

    // Case 1: No child
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

    // Case 2: One child
    else if (temp->left == NULL || temp->right == NULL)
    {
        struct node *child = temp->left == NULL ? temp->right : temp->left;
        if (parent->left == temp) // temp is left child of parent
        {
            parent->left = child;
        }
        else // temp is right child of parent
        {
            parent->right = child;
        }
        free(temp);
    }

    // Case 3: Two children
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
    int choice, data;

    printf("\nMenu:\n");
    printf("1. Insert element into BST\n");
    printf("2. Delete element from BST\n");
    printf("3. Search element in BST\n");
    printf("4. Display BST (Inorder, Preorder, Postorder)\n");
    printf("5. Exit\n");

    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            if (root == NULL)
                createNode(&root, data);
            else
                insert(root, data);

            printf("\n");
            break;
        case 2:
            printf("Enter data to delete: ");
            scanf("%d", &data);
            delete (root, data);
            printf("\n");
            break;
        case 3:
            printf("Enter data to search: ");
            scanf("%d", &data);
            if (search(root, data))
                printf("Element found\n");
            else
                printf("Element not found\n");
            printf("\n");
            break;
        case 4:
            display(root);
            printf("\n");
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}