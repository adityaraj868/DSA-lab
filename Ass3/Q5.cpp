#include<iostream>
#include<stack>
#include<string>
using namespace std;

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

int main(){

    return 0;
}
