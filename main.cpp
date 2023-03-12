#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter first number" << endl;
    cout << "> ";
    cin >> num1;
    cout << "Enter second number" << endl;
    cout << "> ";
    cin >> num2;
    cout << "Enter operator" << endl;
    cout << "> ";
    cin >> op;

    switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }

    return 0;
}