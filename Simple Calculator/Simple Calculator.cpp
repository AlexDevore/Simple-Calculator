#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    cout << "Calculator Application" << endl;
    while (1) {
        string input;
        float a, b = 0;
        char c;
        cout << "Enter first number (or 'q' to quit): ";
        cin >> input;
        if (input == "q") {
            break;
        }
        a = stof(input);

        cout << "Enter second number (or 'q' to quit): ";
        cin >> input;
        if (input == "q") {
            break;
        }
        b = stof(input);

        cout << "Enter operator (+, -, *, /, ^ or 'q' to quit): ";
        cin >> c;
        if (c == 'q') {
            break;
        }

        switch (c) {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;

        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;

        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;

        case '/':
            if (b != 0) {
                cout << a << " / " << b << " = " << a / b << endl;
            }
            else
            {
                cout << "Division by zero" << endl;
            }
            break;
        case'^':
            cout << a << " ^ " << b << " = " << pow(a, b) << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
        }
    }
    return 0;
}
