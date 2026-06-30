/*
==================================================
QUESTION
==================================================

Write a C++ program to calculate the
factorial of a given number.

Take a number as input from the user
and display its factorial.

--------------------------------------------------

Examples:

    Input  : 5
    Output : 120

    Input  : 0
    Output : 1

--------------------------------------------------

Concepts Used:

✔ for Loop
✔ Conditional Statements
✔ Factorial Logic

==================================================
*/

#include <iostream>
using namespace std;

int main() {
    int n ;
    int factorial = 1  ;
    cout << "Enter your number :";
    cin >> n ;
    
    if (n==0 || n==1)
        {
            factorial = 1 ;
        }
    else{
        for (int i = 2 ; i <=n ; i++){
            factorial *= i ;
        }
    }
    cout<<"Factorial of "<<n<<" is : "<<factorial <<endl ;
    return 0;
}

    
    
        
        
    
    