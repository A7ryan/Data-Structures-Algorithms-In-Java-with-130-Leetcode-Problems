#include <bits/stdc++.h>
using namespace std;

class Queue {
    private:
        int arr[5]{};
        int rear = -1;
        int front = -1;
        int queueSize = 0;

    public:
        void push(int element) {
            if(queueSize == 5) {
                cout << "Queue is Full, Cannot Add More Elements!" << endl;
                return;
            }

            if(rear == -1 && front == -1) {
                front = rear = 0;
            } 
            else {
                rear = (rear+1) % 5;
            }

            arr[rear] = element;
            ++queueSize;
        }

        void pop() {
            if(queueSize == 0) {
                cout << "No data Exist in Queue!" << endl;
                return;
            }
            
            if(front == rear) {
                front = rear = -1;
            }
            else {
                front = (front+1) % 5;
            }
            --queueSize;
        }

        int getSize() {
            return queueSize;
        }

        int getFront() {
            if(queueSize == 0) {
                cout << "No data to display!" << endl;
                return -1;
            }
            return arr[front];
        }

};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << q.getFront();
    cout << q.getSize();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << q.getFront();
    cout << q.getSize();
    
    return 0;
}
