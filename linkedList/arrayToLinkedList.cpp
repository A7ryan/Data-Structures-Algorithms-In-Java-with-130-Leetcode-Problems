Node* constructLL(vector<int>& arr) {
    // code here
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++) {
      Node* newArrayNode = new Node(arr[i]);
      mover->next = newArrayNode;
      mover = newArrayNode;
    }
  return head;
}
