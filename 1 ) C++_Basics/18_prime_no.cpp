/*
==================================================
QUESTION 4
==================================================

For a positive integer N (N >= 2),
write a C++ program to print all
Prime Numbers from 2 to N.

A Prime Number is a number that has
exactly two factors:

1. 1
2. The number itself

--------------------------------------------------

Example:

    Input  : 10

    Output :

    2
    3
    5
    7

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Prime Number Logic
✔ Conditional Statements
✔ Number Theory Basics

==================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << "  ";
        }
    }

    return 0;
}
