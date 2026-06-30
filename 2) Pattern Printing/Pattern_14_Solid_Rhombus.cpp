/*
==================================================
QUESTION
==================================================

Write a C++ program to print a
Solid Rhombus Pattern using stars.

Take the number of rows (n)
as input from the user.

--------------------------------------------------

Example:

Input:

    n = 4

Output:

       ****
      ****
     ****
    ****

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Spaces and Stars
✔ Rhombus Pattern Logic

==================================================
*/


#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the value of n :";
    cin>>n ;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=(n-i); j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <=n; k++)
        {
            cout<<"*";
        }
        cout<<endl ;
        
    }
    
    return 0;
}