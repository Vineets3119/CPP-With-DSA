/*
==================================================
QUESTION 1
==================================================

Write a C++ program to get a number
from the user and determine whether
the number is:

1. Positive
2. Negative
3. Zero

Display the appropriate result based
on the value entered by the user.

--------------------------------------------------

Input:

    A number

Output:

    Positive / Negative / Zero

--------------------------------------------------

Concepts Used:

✔ User Input
✔ if-else Statements
✔ Relational Operators
✔ Conditional Logic

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num > 0)
    {
        cout << "The number is Positive." << endl;
    }
    else if (num < 0)
    {
        cout << "The number is Negative." << endl;
    }
    else
    {
        cout << "The number is Zero." << endl;
    }
    return 0;
}