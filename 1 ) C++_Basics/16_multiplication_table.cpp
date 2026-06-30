/*
==================================================
QUESTION 2
==================================================

Write a C++ program to print the
multiplication table of a number
entered by the user.

Display the table up to 10 multiples.

--------------------------------------------------

Example:

    Input  : 5

    Output :

    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15
    ...
    5 x 10 = 50

--------------------------------------------------

Concepts Used:

✔ User Input
✔ for Loop
✔ Multiplication
✔ Output Formatting

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Enter your Number :";
    cin>>n ;

    for (int i = 1; i <=10; i++)
    {
      cout<<n<<" "<<"X"<<" "<<i<<" ="<<" "<<n*i << endl ;
    }
    
    return 0;
}