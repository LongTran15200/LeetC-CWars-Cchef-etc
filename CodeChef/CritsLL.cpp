int solve(Node* head){
    // Initialize the count of critical points
    int criticalPoints = 0;
    
    // Initialize pointers to traverse the linked list
    Node* prev = head;
    Node* curr = head->next;
    
    // Traverse the list, stopping before the last node
    while (curr != nullptr && curr->next != nullptr) {
        // Check if current node is a local minima
        if (curr->data < prev->data && curr->data < curr->next->data) {
            criticalPoints++;
        }
        // Check if current node is a local maxima
        else if (curr->data > prev->data && curr->data > curr->next->data) {
            criticalPoints++;
        }
        
        // Move to the next pair of nodes
        prev = curr;
        curr = curr->next;
    }
    
    // Return the final count of critical points
    return criticalPoints;
}
