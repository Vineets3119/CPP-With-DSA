/*
==================================================
QUESTION 5
==================================================

Write a C++ program to check whether
a given 3-digit number is an
Armstrong Number or not.

An Armstrong Number is a number that
is equal to the sum of the cubes of
its digits.

--------------------------------------------------

Example:

    371

Calculation:

    3³ + 7³ + 1³
    = 27 + 343 + 1
    = 371

Since the sum is equal to the original
number, 371 is an Armstrong Number.

--------------------------------------------------

Input:

    A 3-digit number

Output:

    Armstrong Number
    or
    Not an Armstrong Number

--------------------------------------------------

Concepts Used:

✔ User Input
✔ Arithmetic Operators
✔ Digit Extraction
✔ Conditional Logic
✔ Number Manipulation

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int num, original_no, digit, sum = 0;
    cout << "Enter a 3 digit number :";
    cin >> num;
    original_no = num;
    while (num > 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }
    if (sum == original_no)
    {
        cout << original_no << " is an Armstrong number ." << endl;
    }
    else
    {
        cout << original_no << " is not an Armstrong number ." << endl;
    }
    return 0;
}