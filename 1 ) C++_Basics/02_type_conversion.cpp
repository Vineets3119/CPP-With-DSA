/*
==================================================
QUESTION
==================================================

Write a C++ program to demonstrate
implicit type conversion.

1. Declare an integer variable.
2. Declare a floating-point variable.
3. Declare a character variable.
4. Add all three variables and store
   the result in a float variable.
5. Display the final sum.

--------------------------------------------------

Note:

Observe how C++ automatically converts
different data types during arithmetic
operations.

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    float y = 23.5;
    char z = 'A';
    float sum = x + y + z;
    cout << "The value of sum  is : " << sum << endl;
    return 0;
}