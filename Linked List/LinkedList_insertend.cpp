#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    Node *head = nullptr;
    Node *tail = nullptr;

    int a[4] = {1, 2, 3, 4};
    int i = 0; // Initialize i

    while (i < 4) {
        if (head == nullptr) {
            head = new Node(a[i]);
            tail = head;
        } else {
            Node *temp = new Node(a[i]);
            tail->next = temp; // Link the new node
            tail = temp; // Update the tail pointer
        }
        i++;
    }

    Node *print = head;
    while (print != nullptr) {
        cout << print->data << "  ";
        print = print->next;
    }

    // Free allocated memory
    while (head != nullptr) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}
