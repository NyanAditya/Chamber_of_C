// Program to imlement a Singly Linked List

#include<stdio.h>
#include<stdlib.h>
typedef struct ListElement
{
    int data;
    struct ListElement *next;
} ListElement;

ListElement *head = NULL;

ListElement* createNODE (int value){
    ListElement *newNODE = (ListElement*)malloc(sizeof(ListElement));
    
    newNODE->data = value;
    newNODE->next = NULL;

    return newNODE;
}

void insertPOS(int value, int pos, ListElement **head) {
    if (pos == 0 || *head == NULL){
        if (*head == NULL && pos != 0) printf("Linked List Empty. Inserting at Beginning!");

        ListElement *newNODE = createNODE(value);
        *head = newNODE;
        return;
    }

    
    ListElement *temp = *head;
    ListElement *newNODE = createNODE(value);
    int count = 1;

    while (temp->next != NULL && count!=pos){
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL && count != pos) printf("POS out of range! Inserting at the END.");


    newNODE->next = temp->next;
    temp->next = newNODE;
}

void displayLIST(ListElement **head) {
    ListElement *temp = *head;

    while (temp->next != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");
}

void deleteNODE (ListElement **head, int pos){
    ListElement *temp = *head;

    if (*head == NULL) printf("Empty List!");

    else if (pos == 0){
        free(head);
        return;
    }

    int counter = 0;

    while (temp->next->next != NULL && counter != pos-1){
        temp = temp->next;
        counter++;
    }

    if (temp->next->next == NULL && counter != pos-1) printf("POS out of range! Deleting at the END.");
    
    ListElement *HoldElement = temp->next;

    temp->next = HoldElement->next;

    free(HoldElement);
}


// menu driven program

int main() {
    int choice, value, pos;

    printf("Linked List Implementation\n");
    printf("1. Insert at a specific position\n");
    printf("2. Delete from a specific position\n");
    printf("3. Display the List\n");
    printf("4. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                printf("Enter the position to insert the value: ");
                scanf("%d", &pos);
                insertPOS(value, pos, &head);
                break;
            case 2:
                printf("Enter the position to delete the value: ");
                scanf("%d", &pos);
                deleteNODE(&head, pos);
                break;
            case 3:
                displayLIST(&head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
        printf("\n");
    }
    return 0;
}