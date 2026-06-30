/*
==================================================
QUESTION
==================================================

Write a C++ program to create a simple
calculator using switch-case.

Take two numbers and an operator
(+, -, *, /) as input from the user.

Perform the corresponding operation
and display the result.

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Result = " << a + b << endl;
        break;

    case '-':
        cout << "Result = " << a - b << endl;
        break;

    case '*':
        cout << "Result = " << a * b << endl;
        break;

    case '/':
        if (b != 0)
            cout << "Result = " << a / b << endl;
        else
            cout << "Division by zero is not allowed." << endl;
        break;

    default:
        cout << "Invalid Operator!" << endl;
    }

    return 0;
}