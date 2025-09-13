#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;
    
    cout << "Сalculator" << endl;
    cout << "Write the first number: ";
    cin >> num1;
    
    cout << "Enter the sign +,-,*,/: ";
    cin >> operation;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            } else {
                cout << "You can't divide by zero...";
            }
            break;
        default:
            cout << "Write a normal sign!";
    }
    
    return 0;
}