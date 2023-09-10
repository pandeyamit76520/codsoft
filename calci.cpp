#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation) {
        case '+':
            cout<<"Addition of given numbers is ";
            result = num1 + num2;
            break;
        case '-':
            cout<<"Subtraction of given numbers is ";
            result = num1 - num2;
            break;
        case '*':
            cout<<"Multiplication of given numbers is ";
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                cout<<"Division of given numbers is ";
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1; 
    }

    cout << "Result: " << result << endl;

    return 0; 
}

