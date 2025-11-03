#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert_end(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        return;
    }
    Node* t = head;
    while (t->next != NULL) t = t->next;
    t->next = temp;
}

void reverse() {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void display() {
    Node* t = head;
    while (t != NULL) {
        cout << t->data << "->";
        t = t->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        insert_end(val);
    }
    reverse();
    display();
}
