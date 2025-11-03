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

int delete_key(int key) {
    int count = 0;
    while (head != NULL && head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        count++;
    }
    Node* curr = head;
    while (curr != NULL && curr->next != NULL) {
        if (curr->next->data == key) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            count++;
        } else {
            curr = curr->next;
        }
    }
    return count;
}

void display() {
    Node* t = head;
    while (t != NULL) {
        cout << t->data;
        if (t->next != NULL) cout << "->";
        t = t->next;
    }
    cout << endl;
}

int main() {
    int n, val, key;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        insert_end(val);
    }
    cin >> key;
    int count = delete_key(key);
    cout << "Count: " << count << endl;
    cout << "Updated Linked List: ";
    display();
}
