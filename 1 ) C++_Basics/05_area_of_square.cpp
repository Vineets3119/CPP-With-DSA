/*
==================================================
QUESTION
==================================================

Write a C++ program to:

1. Take the side length of a square
   as input from the user.

2. Calculate the area of the square.

3. Display the calculated area.

--------------------------------------------------

Formula Used:

    Area of Square = side × side

--------------------------------------------------

Concepts Used:

✔ User Input
✔ Arithmetic Operators
✔ Variables
✔ Area Calculation

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the side of square : ";
    cin >> n;
    int area = n * n;
    cout << "The area of square is : " << area << endl;
    return 0;
}