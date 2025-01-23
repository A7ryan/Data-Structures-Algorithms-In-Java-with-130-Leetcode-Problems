int getCount(struct Node* head) {
    int nodeCount = 0;
    Node* temp = head;
    while(temp != nullptr) {
        ++nodeCount;
        temp = temp->next;
    }    
    return nodeCount;
    // Code here
}
