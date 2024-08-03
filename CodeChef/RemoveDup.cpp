//Using LinkList to solve this 
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // if the list is empty or has only one node, there are no duplicates to remove
        if (head == NULL || head->next == NULL) {
            return head;
        }

        Node* current = head;
        while (current->next != NULL) {
            if (current->data == current->next->data) {
                // Found a duplicate, remove it
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp; // free the memory of the removed node
            } else {
                // Move to the next node
                current = current->next;
            }
        }
        // Since the list was sorted, all duplicates would be consecutive and are removed now
        return head;
    }
};
