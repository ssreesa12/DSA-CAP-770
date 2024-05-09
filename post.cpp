#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to evaluate postfix expression
int evaluatePostfix(const string& postfix) {
    stack<int> stk;

    for (char ch : postfix) {
        if (isdigit(ch)) { // Operand
            stk.push(ch - '0'); // Convert char to int
        } else { // Operator
            int operand2 = stk.top();
            stk.pop();
            int operand1 = stk.top();
            stk.pop();
            
            switch(ch) {
                case '+':
                    stk.push(operand1 + operand2);
                    break;
                case '-':
                    stk.push(operand1 - operand2);
                    break;
                case '*':
                    stk.push(operand1 * operand2);
                    break;
                case '/':
                    stk.push(operand1 / operand2);
                    break;
            }
        }
    }

    return stk.top();
}

int main() {
    string postfix = "42*3+";
    cout << "Postfix expression: " << postfix << endl;
    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;
    return 0;
}