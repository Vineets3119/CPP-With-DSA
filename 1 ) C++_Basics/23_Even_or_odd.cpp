/*
=================================
QUESTION
=================================

Write a function to check
whether a number is even
or odd.

Return true if the number
is even, otherwise return
false.

=================================
*/

#include <iostream>
using namespace std;

bool isEven (int n){
    if (n%2==0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main() {
    cout << isEven(4) << endl ;
    return 0;
}