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

//Helper function for precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

//Q4. Convert Infix to Postfix
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

//Q5. Evaluate a Postfix expression
int evaluate_postfix(string postfix) {
    stack<int> st;

    for (int i=0; i<postfix.size(); i++) {
        char c = postfix[i];

        //Operand
        if (isdigit(c)) {
            st.push(c-'0');  //convert char to int
        }
        else {
            int val2=st.top(); st.pop();
            int val1=st.top(); st.pop();

            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
            }
        }
    }

    return st.top();
}

int main() {

    return 0;
}
