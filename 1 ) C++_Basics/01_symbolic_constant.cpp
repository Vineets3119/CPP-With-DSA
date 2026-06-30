/*
==================================================
QUESTION
==================================================

Write a C++ program to:

1. Create a macro named 'll' using
   the preprocessor directive #define.

2. Use the macro as an alias for the
   long long data type.

3. Declare two variables x and y of
   type ll.

4. Assign values 10 and 20 to x and y
   respectively.

5. Display the values of both variables.

==================================================
*/

#include <iostream>
#define ll long long 
using namespace std;

int main() {
    ll x ;
    x = 10;
    ll y = 20 ;
    cout << "The value of x is : " << x << endl;
    cout << "The value of y is : " << y << endl;
    return 0;
}