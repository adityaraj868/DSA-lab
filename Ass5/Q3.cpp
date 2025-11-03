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

int find_middle() {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main() {
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val;
        insert_end(val);
    }
    cout << find_middle();
}
