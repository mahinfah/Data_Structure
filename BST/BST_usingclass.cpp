
#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* left;
    Node* right;

public:
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

    int getData() {
        return data;
    }

    Node* getLeft() {
        return left;
    }

    Node* getRight() {
        return right;
    }

    void setLeft(Node* left) {
        this->left = left;
    }

    void setRight(Node* right) {
        this->right = right;
    }
};

Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->getData()) {
        root->setLeft(insert(root->getLeft(), val));
    } else if (val > root->getData()) {
        root->setRight(insert(root->getRight(), val));
    }
    return root;
}

void searchNode(Node* root, int val) {
    if (root == nullptr) {
        cout << val << " is not found" << endl;
        return;
    }
    if (root->getData() == val) {
        cout << val << " is found" << endl;
    } else if (val < root->getData()) {
        searchNode(root->getLeft(), val);
    } else {
        searchNode(root->getRight(), val);
    }
}

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->getLeft());
        cout << root->getData() << " ";
        inorder(root->getRight());
    }
}

void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->getData() << " ";

        preorder(root->getLeft());

        preorder(root->getRight());
    }
}

void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->getLeft());

        postorder(root->getRight());

        cout << root->getData() << " ";
    }
}

int main() {
    Node* root = nullptr;
    Node* check =nullptr;
    root=insert(root, 5);
    insert(root, 2);
    insert(root, 6);
    insert(root, 1);
    insert(root, 3);

    searchNode(root, 6);
    searchNode(root, 4);
      searchNode(root, 99);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Preorder traversal: ";
    preorder(root);
       cout << endl;
       cout << endl;
       cout << endl;

    cout << "Postorder traversal: ";

    postorder(root);
    cout << endl;

    cout << endl;

    return 0;
}
