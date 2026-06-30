/*
==================================================
QUESTION
==================================================

Write a C++ program that repeatedly
takes numbers as input from the user.

Display the entered number after
every input.

The program should stop when the user
enters a number that is divisible by 10.

--------------------------------------------------

Example:

Input  : 23
Output : You entered 23

Input  : 17
Output : You entered 17

Input  : 40
Program Terminates

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    int n ;
    do
    {
        cout<<"Enter your number : ";
        cin>>n ;
        if (n%10==0)
        {
            break;
        }
        cout<<"You entered "<< n <<endl ;
    } while (true);
    
    return 0;
}