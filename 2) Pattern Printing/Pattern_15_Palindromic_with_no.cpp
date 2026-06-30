/*
==================================================
QUESTION
==================================================

Write a C++ program to print a
Palindromic Number Pyramid.

Take the number of rows (n)
as input from the user.

--------------------------------------------------

Example:

Input:

    n = 5

Output:

            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Number Patterns
✔ Palindrome Logic
✔ Spaces and Alignment

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
        for (int j = 1; j <=(n-i); j++)
        {
            cout<<"  "; // two spaces
        }
        //descending number
        for (int j = i; j >=1; j--)
        {
            cout<<j<<" "; // here one space is already given so we write two spaces in the 2nd for loop
        }
        //ascending number
        for (int j = 2; j <=i  ; j++)
        {
            cout<<j<<" "; // here one space is already given so we write two spaces in the 2nd for loop
        }
        cout<<endl ;
        
    }
    
    return 0;
}