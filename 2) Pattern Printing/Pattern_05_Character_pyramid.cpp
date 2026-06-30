/*
==================================================
QUESTION
==================================================

Write a C++ program to print the
following character pattern using
nested loops:

A

B C

D E F

G H I J

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Characters (char)
✔ ASCII Values
✔ Increment Operator (++)

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<ch++<<" ";
        }
        cout<<endl ;
    }
    
    return 0;
}