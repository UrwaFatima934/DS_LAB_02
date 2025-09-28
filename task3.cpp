#include <iostream>
using namespace std;

struct Node {
    int data;                    // value stored
    Node* next;                  // pointer to next node
};
int main() {
    // Create three nodes manually
    Node* head = new Node{10, NULL};   // First node (head) with value 10
    Node* second = new Node{20, NULL};      // Second node with value 20
    Node* third = new Node{30, NULL};         // Third node with value 30
    // Link nodes together
    head->next = second;       // Head points to second
    second->next = third;       // Second points to third
    // Traverse List from head
    cout << "Linked List: ";
    Node* temp = head;           // Start from head node
    while(temp != NULL) {            // Loop until we reach NULL
        cout << temp->data << " ";   // print data
        temp = temp->next;           // move to next node
    }
    return 0;         // Exit program
}