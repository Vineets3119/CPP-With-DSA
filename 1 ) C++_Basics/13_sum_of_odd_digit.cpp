/*
==================================================
QUESTION
==================================================

Write a C++ program to find the sum
of all odd digits present in a given
number.

Display the final sum of the odd digits.

Example:

    Number = 10829

    Odd Digits = 1, 9

    Sum = 1 + 9
        = 10

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
        if (digit%2!=0)
        {
            sum += digit;
        }
        num = num / 10;
    }
    cout << "The sum of the number is " << sum << endl;
    return 0;
}