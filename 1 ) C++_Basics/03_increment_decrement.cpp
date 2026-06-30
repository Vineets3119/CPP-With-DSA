/*
==================================================
QUESTION
==================================================

Write a C++ program to demonstrate the
difference between:

1. Post-Increment Operator (variable++)
2. Pre-Increment Operator (++variable)

Tasks:

1. Declare an integer variable and use
   the post-increment operator while
   assigning its value to another variable.

2. Display the values of both variables
   after the operation.

3. Declare another integer variable and
   use the pre-increment operator while
   assigning its value to a second variable.

4. Display the values of both variables
   after the operation.

--------------------------------------------------

Objective:

Understand how pre-increment and
post-increment operators affect the
value assigned during an expression.

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b = a++;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;

    int x = 3;
    int y = ++x;
    cout << "The value of x is : " << x << endl;
    cout << "The value of y is : " << y << endl;

    return 0;
}