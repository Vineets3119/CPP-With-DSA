/*
==================================================
QUESTION
==================================================

Write a C++ program to print a
right-aligned star triangle pattern.

Take the number of rows (n)
as input from the user.

--------------------------------------------------

Example:

Input:

    n = 4

Output:

       *
      **
     ***
    ****

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Spaces and Stars
✔ Row and Column Logic

==================================================
*/


#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter the value of n :";
    cin>>n ;
    for (int i = 1; i<=n ; i++)
    {
        // //spaces
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        //stars
        for (int k = 1; k<=i ; k++)
        {
            cout<<"*" ;
        }
        cout<<endl ;
    }
    
    return 0;
}