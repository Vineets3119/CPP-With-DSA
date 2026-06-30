/*
=================================
QUESTION
=================================

Write a function to convert
a Binary Number into its
Decimal equivalent.

=================================
*/

#include <iostream>
using namespace std;

void binTodec(int binNum){
    int n = binNum ; // To store the original binary number 
    int decNum = 0 ; // Stores the decimal equivalent 
    int power = 1 ; // Represents powers of 2 (2^0, 2^1, 2^2, ...)

    while (n>0)
    {
        int last_digit = n%10 ;
        decNum += last_digit*power ; 
        power *= 2 ; // Move to the next power of 2
        n = n/10 ;
    }
    cout<<decNum<<endl ;
}

int main() {
    binTodec(101);

    
    return 0;
}