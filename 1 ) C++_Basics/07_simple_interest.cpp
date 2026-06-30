/*
==================================================
QUESTION 3
==================================================

Build a Simple Interest Calculator.

Take the following inputs from the user:

1. Principal Amount (P)
2. Rate of Interest (R)
3. Time (T)

Calculate the Simple Interest using
the given formula and display the result.

--------------------------------------------------

Formula:

    Simple Interest = (P * R * T) / 100

--------------------------------------------------

Concepts Used:

✔ User Input
✔ Variables
✔ Arithmetic Operators
✔ Mathematical Formula

==================================================
*/

#include <iostream>
using namespace std;

int main() 
{
    float P, R, T;
    cout << "Enter the Principal Amount (P) : ";
    cin >> P;
    cout << "Enter the Rate of Interest (R) : ";
    cin >> R;
    cout << "Enter the Time (T) in years : ";
    cin >> T;
    float SI = (P * R * T) / 100;
    cout << "The Simple Interest is : " << SI << endl;
    return 0;
}