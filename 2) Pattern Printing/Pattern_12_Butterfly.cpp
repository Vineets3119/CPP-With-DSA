/*
==================================================
QUESTION
==================================================

Write a C++ program to print a
Butterfly Pattern using stars.

Take the number of rows (n)
as input from the user.

--------------------------------------------------

Example:

Input:

    n = 4

Output:

    *      *
    **    **
    ***  ***
    ********
    ***  ***
    **    **
    *      *

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Spaces and Stars
✔ Symmetric Patterns
✔ Butterfly Pattern Logic

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the value of n :";
    cin>>n ;
    
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <=(n-i)*2; k++)
        {
            cout<<" ";
        }
        for (int l = 1; l <=i; l++)
        {
            cout<<"*";
        }
        cout<<endl ;
    }
    for (int i = n; i ; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <=(n-i)*2; k++)
        {
            cout<<" ";
        }
        for (int l = 1; l <=i; l++)
        {
            cout<<"*";
        }
        cout<<endl ;
    }
    return 0;
}