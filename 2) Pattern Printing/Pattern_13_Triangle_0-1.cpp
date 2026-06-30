/*
==================================================
QUESTION
==================================================

Write a C++ program to print the
following 0-1 Triangle Pattern.

Take the number of rows (n)
as input from the user.

--------------------------------------------------

Example:

Input:

    n = 5

Output:

    1
    01
    101
    0101
    10101

--------------------------------------------------

Pattern Rule:

If (row + column) is even,
print 1.

If (row + column) is odd,
print 0.

--------------------------------------------------

Concepts Used:

✔ Nested Loops
✔ Pattern Printing
✔ Conditional Statements
✔ Modulus Operator (%)

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
        for (int j = 1; j <=i ; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl ;
    }
    
    return 0;
}