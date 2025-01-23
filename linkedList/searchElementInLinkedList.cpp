bool searchKey(int n, Node* head, int key) {
    // Code here
    Node* temp = head;
    while(temp != nullptr) {
        if(temp->data == key) return true;
        temp = temp->next;
    }
    return false;
}
