#include <bits/stdc++.h>
using namespace std;

class Node {
    private:
        int data;
        Node* next;
    
    public:
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }

        void setNext(Node* next) {
            this->next = next;
        }

        int getData() {
            return data;
        }

        Node* getNext() {
            return next;
        }
};


int main() {
    Node* head = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    
    head->setNext(n2);
    n2->setNext(n3);
    n3->setNext(n4);


    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->getData() << " " << endl;
        temp = temp->getNext();
    }

    return 0;
}
