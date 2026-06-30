/*
==================================================
QUESTION
==================================================

Write a C++ program to reverse a
given number.

Take a number as input from the user
and display its reverse.

Example:

    Input  : 12345
    Output : 54321

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    int num ;
    cout <<"Enter the number : ";
    cin>> num ;
    int reverse = 0 ;
    while (num>0)
    {
        int last_digit ;
        last_digit = num % 10 ;
        reverse = reverse * 10 + last_digit ;
        num = num/10 ;
    }
    cout << "The reverse of the given number is "<<reverse <<endl ;
    return 0;
}