#include <bits/stdc++.h>
using namespace std;

// Stack -> Last In First Out
class Stack {
    private:
        int arr[5]{};
        int top = -1;
    
    public:
        void push(int element) {
            if(top == 4) {
                cout << "No Space to Add Element!" << endl;
                return;
            }
            ++top;
            arr[top] = element;
        }

        int getTop() {
            if(top == -1) {
                cout << "No Data Exist!" << endl;
                return -1;
            }
            return arr[top];
        }


        void pop() {
            if(top == -1) {
                cout << "Array is Already Void!" << endl;
                return;
            }
            --top;
        }


        int getSize() {
            return top+1;
        }

        void printStack() {
            if(top == -1) {
                cout << "No Data to Print!";
                return;
            }
            for(int i = 0; i <= top; i++) {
                cout << arr[i] << endl;
            }
        }


};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.printStack();
    // cout << st.getTop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // st.pop();
    // cout << st.getSize() << endl;
    // cout << st.getTop();
    return 0;
}
