#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;
    
    cout << "Калькулятор" << endl;
    cout << "Напеши первое число: ";
    cin >> num1;
    
    cout << "Введите знак +,-,*,/: ";
    cin >> operation;
    
    cout << "Введите второе число: ";
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
                cout << "Ошибка: деление на ноль!";
            }
            break;
        default:
            cout << "Пиши нормальный знак!";
    }
    
    return 0;
}