/*
==================================================
QUESTION 2
==================================================

Write a C++ program that takes a year
as input from the user and determines
whether the given year is a leap year
or not.

Display the appropriate result based
on the year entered.

--------------------------------------------------

Input:

    A year

Output:

    Leap Year
    or
    Not a Leap Year

--------------------------------------------------

Concepts Used:

✔ User Input
✔ if-else Statements
✔ Logical Operators
✔ Conditional Logic

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year : ";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << year << " is a Leap Year." << endl;
    }
    else
    {
        cout << year << " is Not a Leap Year." << endl;
    }
    return 0;
}