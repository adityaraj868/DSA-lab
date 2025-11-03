#include<iostream>
#include<stack>
#include<string>
using namespace std;

//Q3. Checking if an expression has balanced parentheses
bool is_balanced(string expr) {
    stack<char> st;
    for (int i=0; i<expr.size(); i++) {
        char c=expr[i];
        if (c=='(' || c=='{' || c=='[') {
            st.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((c==')' && top!='(') ||
                (c=='}' && top!='{') ||
                (c==']' && top!='[')) {
                return false;
            }
        }
    }
    return st.empty();
}

int main(){

    return 0;
}
