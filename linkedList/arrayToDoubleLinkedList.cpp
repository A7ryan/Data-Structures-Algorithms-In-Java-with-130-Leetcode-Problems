Node* constructDLL(vector<int>& arr) {
    // code here
    Node* head = new Node(arr[0]);
    Node* back = head;
    Node* front = head;
        
    for(int i = 1; i < arr.size(); i++) {
        Node* newArrayNode = new Node(arr[i]);
        front->next = newArrayNode;
        newArrayNode->prev = back;
        back = front = newArrayNode;
    }
    return head;
}
