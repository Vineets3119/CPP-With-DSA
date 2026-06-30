/*
==================================================
QUESTION
==================================================

Write a C++ program to print the
following pattern using nested loops:

1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Row and Column Logic

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j <=4 ; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl ;
    }
    
    return 0;
}