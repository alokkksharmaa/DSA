#include <bits/stdc++.h>
using namespace std;

// Singly Linked List Implementation
// Insert at head, tail, delete by value, print list
// Clean and interview-friendly code

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
    Node *head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtHead(int value) {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int value) {
        Node *newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteValue(int value) {
        if (!head) return;

        if (head->data == value) {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *curr = head;
        while (curr->next && curr->next->data != value) {
            curr = curr->next;
        }

        if (curr->next) {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
    }

    void printList() {
        Node *temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    LinkedList ll;
    
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtTail(5);
    ll.insertAtTail(15);

    ll.printList();

    ll.deleteValue(10);
    ll.printList();

    return 0;
}
