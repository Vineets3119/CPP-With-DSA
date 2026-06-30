/*
==================================================
QUESTION
==================================================

Write a C++ program to print
Floyd's Triangle.

Take the number of rows (n)
as input from the user.

--------------------------------------------------

Example:

Input:

    n = 4

Output:

    1
    2  3
    4  5  6
    7  8  9  10

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Number Patterns
✔ Increment Operator (++)

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the value of n :";
    cin>>n ;
    int num = 1 ;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout<<num++<<"  " ;
        }
        cout<<endl ;
    }
    
    return 0;
}