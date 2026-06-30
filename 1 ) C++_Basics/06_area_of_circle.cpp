/*
==================================================
QUESTION 4
==================================================

Write a C++ program to calculate the
area of a circle.

Take the radius (r) as input from
the user.

Calculate and display the area of
the circle.

--------------------------------------------------

Formula:

    Area = PI * r * r

--------------------------------------------------

Input:

    Radius (r)

Output:

    Area of the Circle

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
    float r;
    cout << "Enter the radius of circle : ";
    cin >> r;
    float area = 3.14 * r * r;
    cout << "The area of circle is : " << area << endl;
    return 0;
}