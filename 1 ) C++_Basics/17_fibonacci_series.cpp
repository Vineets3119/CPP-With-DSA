/*
==================================================
QUESTION 5
==================================================

For a positive integer N (N >= 2),
write a C++ program to print the
first N Fibonacci numbers.

The Fibonacci series starts with:

    0, 1

and each subsequent number is the
sum of the previous two numbers.

--------------------------------------------------

Example:

    Input  : 8

    Output :

    0 1 1 2 3 5 8 13

--------------------------------------------------

Concepts Used:

✔ Loops
✔ Variables
✔ Fibonacci Series Logic
✔ Number Sequences

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number :";
    cin >> n;
    int first = 0;
    int second = 1;
    cout << first << "  " << second << "  ";
    for (int i = 3; i <= n; i++)
    {
        int next = first + second;
        cout << next << "  ";
        first = second;
        second = next;
    }

    return 0;
}