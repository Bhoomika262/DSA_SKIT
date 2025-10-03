#include <iostream>
#include <stack>
#include <string>
using namespace std;

int perform_operation(int operand1, int operand2, char operation) {
    switch(operation) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
        default: return 0;
    }
}

int evaluationPostfixExpression(const string &expression) {
    stack<int> st;

    for(char c : expression) {
        if (isdigit(c)) {
            st.push(c - '0');
        }
        else {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();

            int result = perform_operation(operand1, operand2, c);
            st.push(result);
        }
    }
    return st.top();
}

int main() {
    string expression = "23*4+";
    int result = evaluationPostfixExpression(expression);

    cout << "Result of Postfix Expression: " << expression << " = " << result << endl;

    return 0;
}
