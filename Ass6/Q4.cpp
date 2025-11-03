#include <iostream>
using namespace std;

class Node {
public:
    char data;
    Node* next;
    Node* prev;
    Node(char val) {
        data = val;
        next = prev = NULL;
    }
};

bool isPalindrome(Node* head) {
    if (!head) return true;
    Node* tail = head;
    while (tail->next) tail = tail->next;
    while (head != tail && tail->next != head) {
        if (head->data != tail->data)
            return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}