/*
==================================================
QUESTION
==================================================

Write a C++ program to print a
Hollow Square Pattern using stars.

Take the size of the square (n)
as input from the user.

--------------------------------------------------

Example:

Input:

    n = 4

Output:

    ****
    *  *
    *  *
    ****

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Conditional Statements
✔ Hollow Patterns

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the value of n :";
    cin>>n ;

    for (int i = 1; i <= n; i++)
    {
        cout<<"*";
        for (int j = 1; j <= n-1 ; j++)
        {
            if (i==1 || i==n)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*"<<endl;
    }
    
    return 0;
}