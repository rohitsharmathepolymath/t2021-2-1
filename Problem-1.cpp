#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;
    char op;
    void calculate() {
        if (op == '+') {
            cout << "result: " << a + b << endl;
        } else if (op == '-') {
            cout << "result: " << a - b << endl;
        } else if (op == '*') {
            cout << "result: " << a * b << endl;
        } else if (op == '/') {
            if (b != 0) {
                cout << "result: " << a / b << endl;
            } else {
                cout << "error: Division by zero!" << endl;
            }
        } else {
            cout << "invalid op!" << endl;
        }
    }
};

int main() {
    double num1, num2;
    char op;
    cout << "enter first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;
    cout << "enter op (+, -, *, /): ";
    cin >> op;
    Calculator calc;
    calc.a = num1;
    calc.b = num2;
    calc.op = op;
    calc.calculate();
    return 0;
}
