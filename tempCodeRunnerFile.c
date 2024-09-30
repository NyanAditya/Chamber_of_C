#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Merge_Sorted_SLL.c"

void test_mergeLists() {
    // Test case 1: Both lists are empty
    SinglyLinkedListNode *head1 = NULL;
    SinglyLinkedListNode *head2 = NULL;
    SinglyLinkedListNode *merged = mergeLists(head1, head2);
    assert(merged == NULL);

    // Test case 2: One list is empty, the other is not
    SinglyLinkedList *list1 = malloc(sizeof(SinglyLinkedList));
    list1->head = NULL;
    list1->tail = NULL;
    insert_node_into_singly_linked_list(&list1, 1);
    insert_node_into_singly_linked_list(&list1, 3);
    insert_node_into_singly_linked_list(&list1, 5);

    merged = mergeLists(list1->head, head2);
    assert(merged->head->data == 1);
    assert(merged->head->next->data == 3);
    assert(merged->head->next->next->data == 5);
    assert(merged->head->next->next->next == NULL);

    // Test case 3: Both lists have elements
    SinglyLinkedList *list2 = malloc(sizeof(SinglyLinkedList));
    list2->head = NULL;
    list2->tail = NULL;
    insert_node_into_singly_linked_list(&list2, 2);
    insert_node_into_singly_linked_list(&list2, 4);
    insert_node_into_singly_linked_list(&list2, 6);

    merged = mergeLists(list1->head, list2->head);
    assert(merged->head->data == 1);
    assert(merged->head->next->data == 2);
    assert(merged->head->next->next->data == 3);
    assert(merged->head->next->next->next->data == 4);
    assert(merged->head->next->next->next->next->data == 5);
    assert(merged->head->next->next->next->next->next->data == 6);
    assert(merged->head->next->next->next->next->next->next == NULL);

    // Free memory
    free_singly_linked_list(merged->head);
    free(list1);
    free(list2);
}

int main() {
    test_mergeLists();
    printf("All tests passed!\n");
    return 0;
}