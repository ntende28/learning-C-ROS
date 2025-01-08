#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

void PrintList(Node* n) {
    while (n != NULL){
        cout << n->data << endl;
        n = n->next;
    }
}

// insert a node at the head of a linked list
void insertAtTheFront(Node** head, int newValue) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    // Put it infront of head node
    newNode->next = *head;
    //move head of list to point to the new node
    *head = newNode;
}

// insert a new node at a given node
void insertAfterNode(Node* previous, int newValue) {
    // check  if previous node is NULL
    if (previous == NULL) {
        cout << "Previous node cannot be NULL" << endl; 
        return;
    }
    // create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    // insert new node after previous
    newNode->next = previous->next;
    previous->next= newNode;
}

void insertAtTheEnd(Node** head, int newValue) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = NULL;
    // if linked list is empty new node will be head node
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    //find last node
    Node* last = *head;
    while (last->next != NULL)
    {
       last = last->next;
    }    
    // insert new node at the end
    last->next = newNode; 
}

int main() {

    Node* head = new Node(); //first element in the linkedlist
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1; // accessing elements in the class when using pointers
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    // insertAtTheFront(&head, -1);
    // insertAtTheFront(&head, -2);
    // insertAtTheEnd(&head, 6);
    // insertAtTheEnd(&head, 9);

    insertAfterNode(second, 20);
    insertAfterNode(third, 30);
    PrintList(head);

    return 0;
}
