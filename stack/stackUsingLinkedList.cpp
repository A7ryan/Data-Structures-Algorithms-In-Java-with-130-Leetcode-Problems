#include <bits/stdc++.h>
using namespace std;

// Stack -> Last In First Out
class Node {
    private:
        int data;
        Node* next;

    public:
        Node(int element) {
            this->data = element;
        }

        void setNext(Node* node) {
            this->next = node;
        }

        Node* getNext() {
            return next;
        }

        int getData() {
            return data;
        }
};


class Stack {
    private:
        Node* top;

    public:
        Stack() {
            top = nullptr;
        }

        void push(int element) {
            Node* node = new Node(element);
            node->setNext(top);
            top = node;
        }

        void pop() {
            if(top == nullptr) {
                cout << "Stack is already Empty!";
                return;
            }
            Node* temp = top;
            top = top->getNext();
            delete(temp);
        }


        int getTop() {
            if(top == nullptr) {
                cout << "No Data Exist!";
                return -1;
            }
            return top->getData();
        }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.pop();
    cout << st.getTop();
    return 0;
}
