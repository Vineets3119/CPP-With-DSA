/*
==================================================
QUESTION
==================================================

Write a C++ program to find the sum
of all digits of a given number.

Display the final sum of the digits.

Example:

    Number = 10829

    Sum = 1 + 0 + 8 + 2 + 9
        = 20

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 10829;
    int digit;
    int sum = 0;
    while (num > 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    cout << "The sum of the number is " << sum << endl;
    return 0;
}