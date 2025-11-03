#include<iostream>
#include<stack>
#include<string>
using namespace std;

//Q2. Reverse a string using STACK
void reverse_string(string &s) {
    stack<char> st;
    for (int i=0; i<s.size(); i++) {
        st.push(s[i]);
    }

    for (int i=0; i<s.size(); i++) {
        s[i] = st.top();
        st.pop();
    }
}

int main() {

    return 0;
}
