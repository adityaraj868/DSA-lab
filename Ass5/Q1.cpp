#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert_begin(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->next = head;
    head = temp;
}

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

void insert_before(int key, int val) {
    if (head == NULL) return;
    if (head->data == key) {
        insert_begin(val);
        return;
    }
    Node* t = head;
    while (t->next != NULL && t->next->data != key) t = t->next;
    if (t->next == NULL) return;
    Node* temp = new Node;
    temp->data = val;
    temp->next = t->next;
    t->next = temp;
}

void insert_after(int key, int val) {
    Node* t = head;
    while (t != NULL && t->data != key) t = t->next;
    if (t == NULL) return;
    Node* temp = new Node;
    temp->data = val;
    temp->next = t->next;
    t->next = temp;
}

void delete_begin() {
    if (head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void delete_end() {
    if (head == NULL) return;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* t = head;
    while (t->next->next != NULL) t = t->next;
    delete t->next;
    t->next = NULL;
}

void delete_node(int key) {
    if (head == NULL) return;
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* t = head;
    while (t->next != NULL && t->next->data != key) t = t->next;
    if (t->next == NULL) return;
    Node* del = t->next;
    t->next = t->next->next;
    delete del;
}

void search(int key) {
    Node* t = head;
    int pos = 1;
    while (t != NULL) {
        if (t->data == key) {
            cout << "Found at position " << pos << endl;
            return;
        }
        t = t->next;
        pos++;
    }
    cout << "Not found" << endl;
}

void display() {
    Node* t = head;
    while (t != NULL) {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}