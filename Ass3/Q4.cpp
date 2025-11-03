#include<iostream>
#include<stack>
#include<string>
using namespace std;

//Q4. Convert Infix to Postfix
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infix_to_postfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (int i=0; i<infix.size(); i++) {
        char c = infix[i];

        //If operand, add to output
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || isdigit(c))
            postfix += c;

        //If '(' push it
        else if (c == '(')
            st.push(c);

        //If ')' pop until '('
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // pop '('
        }

        //Operator
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    //Pop remaining operators
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main(){

    return 0;
}