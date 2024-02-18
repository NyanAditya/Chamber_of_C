class Node:
    def __init__(self, data=0, next=None, prev=None):
        self.data = data
        self.next = next
        self.prev = prev


# Don't change the code above.

def removeDuplicates(head: Node) -> Node:
    
    if head is None:
        return head
    
    # Create a set to store unique values
    unique_values = set()
    
    # Initialize current node
    current = head
    
    # Traverse the linked list
    while current is not None:
        # Check if the current node's data is already in the set
        if current.data in unique_values:
            # Remove the duplicate node by updating the next and prev pointers
            current.prev.next = current.next
            if current.next is not None:
                current.next.prev = current.prev
        else:
            # Add the current node's data to the set
            unique_values.add(current.data)
        
        # Move to the next node
        current = current.next
    
    return head