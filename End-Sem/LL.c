// Program to imlement a Singly Linked List

#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int data;
    ListElement *next;
} ListElement;

ListElement *head = NULL;

ListElement* createNODE (int value){
    ListElement *newNODE = (ListElement*)malloc(sizeof(ListElement));
    
    newNODE->data = value;
    newNODE->next = NULL;

    return newNODE;
}

ListElement insertPOS(int value, int pos, ListElement **head) {
    if (pos == -1 || *head == NULL){
        if (*head == NULL) printf("Linked List Empty. Inserting at Beginning!");

        
    }
}