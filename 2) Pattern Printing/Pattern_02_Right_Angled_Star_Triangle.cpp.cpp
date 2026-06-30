/*
==================================================
QUESTION
==================================================

Write a C++ program to print the
following star pattern using nested loops:

*
* *
* * *
* * * *

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
        for (int j = 1; j <=i ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl ;
    }
    
    return 0;
}