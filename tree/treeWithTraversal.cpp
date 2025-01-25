#include <bits/stdc++.h>
using namespace std;

class Tree {
    private:
        int data;
        Tree* left;
        Tree* right;

    public:
        Tree(int data) {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }

        void setLeft(Tree* left) {
            this->left = left;
        }

        void setRight(Tree* right) {
            this->right = right;
        }

        int getData() {
            return data;
        }

        Tree* getLeft() {
            return this->left;
        }

        Tree* getRight() {
            return this->right;
        }

};


// --------------------- DFS (Depth First Traversal) ---------------------

// Extreme Left -> Root -> Right
void inOrderTraversal(Tree* tree) {
    if(tree == nullptr) return;

    inOrderTraversal(tree->getLeft());
    cout << tree->getData() << " ";
    inOrderTraversal(tree->getRight());
}

// Root -> Left -> Right
void preOrderTraversal(Tree* tree) {
    if(tree == nullptr) return;

    cout << tree->getData() << " ";
    preOrderTraversal(tree->getLeft());
    preOrderTraversal(tree->getRight());
}

// Left -> Right -> Root
void postOrderTraversal(Tree* tree) {
    if(tree == nullptr) return;

    postOrderTraversal(tree->getLeft());
    postOrderTraversal(tree->getRight());
    cout << tree->getData() << " ";
}


// --------------------- BFS (Breath First Traversal) ---------------------

// Level - wise
void levelOrderTraversal(Tree* tree) {

}


int main() {
    Tree* rootNode = new Tree(10);
    Tree* tree2 = new Tree(20);
    Tree* tree3 = new Tree(30);

    rootNode->setLeft(tree2);
    rootNode->setRight(tree3);

    // cout << rootNode->getData() << endl;
    // cout << rootNode->getLeft()->getData() << endl;
    // cout << rootNode->getRight()->getData() << endl;

    inOrderTraversal(rootNode);
    cout << endl;
    preOrderTraversal(rootNode);
    cout << endl;
    postOrderTraversal(rootNode);
    cout << endl;
    
    return 0;
}
