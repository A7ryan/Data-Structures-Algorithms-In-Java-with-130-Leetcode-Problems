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
    vector<vector<int>> ans;
    if(tree == nullptr) return;
    queue<Tree*> q;
    q.push(tree);

    while(!q.empty()) {
        int size = q.size();
        vector<int> level;
        for(int i = 0; i < size; i++) {
            Tree* tree = q.front();
            q.pop();
            level.push_back(tree->getData());

            if(tree->getLeft() != nullptr) {
                q.push(tree->getLeft());
            }
            if(tree->getRight() != nullptr) {
                q.push(tree->getRight());
            }
        }
        ans.push_back(level);

        for(auto it: level) {
            cout << it << " ";
        }
        cout << endl;
    }
}


int main() {
    Tree* rootNode = new Tree(10);
    Tree* tree2 = new Tree(20);
    Tree* tree3 = new Tree(30);
    
    // Tree* tree4 = new Tree(40);
    // Tree* tree5 = new Tree(50);
    // Tree* tree6 = new Tree(60);
    // Tree* tree7 = new Tree(70);

    rootNode->setLeft(tree2);
    // tree2->setLeft(tree4);
    // tree2->setRight(tree5);

    rootNode->setRight(tree3);
    // tree3->setLeft(tree6);
    // tree3->setRight(tree7);

    // cout << rootNode->getData() << endl;
    // cout << rootNode->getLeft()->getData() << endl;
    // cout << rootNode->getRight()->getData() << endl;

    // inOrderTraversal(rootNode);
    // cout << endl;
    // preOrderTraversal(rootNode);
    // cout << endl;
    // postOrderTraversal(rootNode);
    // cout << endl;
    levelOrderTraversal(rootNode);
    return 0;
}
