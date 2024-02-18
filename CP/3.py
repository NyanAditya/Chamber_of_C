from typing import *

# Following is the structure of  Node
# Do not update or change the structure 

class Node:

    def __init__(self, val):
        self.val = val
        self.next = None

def removeLoop(head :Node) -> Node :

    if head is None:
        return head

    # Detect loop using Floyd's Cycle-Finding Algorithm
    slow = head
    fast = head

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

        if slow == fast:
            break

    # If loop exists, find the starting point of the loop
    if slow == fast:
        slow = head
        while slow.next != fast.next:
            slow = slow.next
            fast = fast.next

        # Remove the loop
        fast.next = None

    return head