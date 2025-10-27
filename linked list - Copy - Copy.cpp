#include<bits/stdc++.h>
using namespace std;

// Step 1: Define a Node class
class Node {
public:
    int data;      // stores the value
    Node* next;    // pointer to next node

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    // Step 2: Create first node (10)
    Node* node1 = new Node(10);

    // Step 3: Create second node (20)
    Node* node2 = new Node(20);

    // Step 4: Connect first node to second
    node1->next = node2;

    // Step 5: Create third node (30)
    Node* node3 = new Node(30);

    // Step 6: Connect second node to third
    node2->next = node3;

    // Step 7: Print the linked list
    Node* temp = node1;  // Start from the head (node1)
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;  // Move to next node
    }
    cout << "NULL" << endl;

    return 0;
}
