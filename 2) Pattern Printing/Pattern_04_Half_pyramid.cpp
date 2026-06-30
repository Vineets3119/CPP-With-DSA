/*
==================================================
QUESTION
==================================================

Write a C++ program to print the
following number pattern using
nested loops:

1
1 2
1 2 3
1 2 3 4

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Number Patterns
✔ Row and Column Logic

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl ;
    }
    
    return 0;
}