/*
==================================================
QUESTION
==================================================

Write a C++ program to check whether
a given number is Prime or Not Prime.

Optimize the solution by checking
divisibility only up to sqrt(n).

==================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    bool is_prime = true;

    if (n <= 1)
    {
        is_prime = false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    if (is_prime)
    {
        cout << n << " is a Prime Number ." << endl;
    }
    else
    {
        cout << n << " is not a Prime Number ." << endl;
    }

    return 0;
}