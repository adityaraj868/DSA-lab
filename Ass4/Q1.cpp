#include <iostream>
using namespace std;
class queue {
    int q[10];
    int size=10;
    int start=-1;
    int end=-1;
    int curr_size=0;
public:
    void push(int x) {
        if (end==size) {
            cout<<"The queue is full!"<<endl;
        }
        else {
            start=0;
            q[++end]=x;
            curr_size++;
        }
    }
    void pop() {
        if (curr_size==0) {
            cout<<"The queue is empty!"<<endl;
            return;
        }
        if (start==end) {
            start=-1;
            end=-1;
        }
        else {
            start++;
        }
        curr_size--;
    }
    bool isEmpty() {
        return !curr_size;
    }
    bool isFull() {
        return end==size-1;
    }
    int peek() {
        return q[start];
    }
    void display() {
        if (isEmpty()) {
            cout<<"The queue is empty!"<<endl;
            return;
        }
        for (int i=start;i<=end;i++) {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    return 0;
}