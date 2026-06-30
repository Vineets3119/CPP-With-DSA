/*
==================================================
QUESTION
==================================================

Write a C++ program to print the
following inverted star pattern using
nested loops:

* * * *
* * *
* *
*

--------------------------------------------------

Input:

    n = 4

Output:

    * * * *
    * * *
    * *
    *

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
    int n ; // for example : n = 4 
    cout<<"Enter the value of n :";
    cin>>n ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=(n-i+1) ; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl ;
    }
    
    return 0;
}