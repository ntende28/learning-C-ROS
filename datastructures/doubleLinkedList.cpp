#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* previous;
    Node* next;
};

void printForward(Node*head) {
    Node* traverser = head;
    while (traverser != nullptr) {
        cout << traverser->data <<endl;
        traverser = traverser->next;
    }
}

void printBackward(Node* tail) {
    Node* traverser = tail;
    while (traverser != nullptr) {
        cout << traverser->data << endl;
        traverser = traverser->previous;
    }
}

int main() {

    Node* head;
    Node* tail;

    // adding 1st node
    Node* node = new Node();
    node->data = 4;
    node->next = nullptr;
    node->previous = nullptr;
    head = node;
    tail = node;

    //add 2nd node
    node=new Node();
    node->data = 5;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;

    //add 3rd node
    node = new Node();
    node->data = 6;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;

    //add 4th node
    node = new Node();
    node->data = 7;
    node->next = nullptr;
    node->previous = tail;
    tail->next = node;
    tail = node;

    // printForward(head);
    printBackward(tail);

    return 0;
}