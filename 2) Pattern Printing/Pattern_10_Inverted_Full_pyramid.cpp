/*
==================================================
QUESTION
==================================================

Write a C++ program to print an
Inverted Full Star Pyramid pattern.

Take the number of rows (n)
as input from the user.

--------------------------------------------------

Example:

Input:

    n = 4

Output:

    *******
     *****
      ***
       *

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Spaces and Stars
✔ Inverted Pyramid Logic

==================================================
*/


#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the value of n :";
    cin>>n ;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= (2*i-1); k++)
        {
            cout<<"*";
        }
        cout<<endl ;
    }
    
    return 0;
}