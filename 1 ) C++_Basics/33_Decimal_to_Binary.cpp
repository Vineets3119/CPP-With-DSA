/*
=================================
QUESTION
=================================

Write a function to convert
a Decimal Number into its
Binary equivalent.

=================================
*/


#include <iostream>
using namespace std;

// Function to convert Decimal to Binary
void DecToBin(int DecNum){
    int n = DecNum ; // Store the original decimal number
    int BinNum = 0 ; // Stores the binary equivalent
    int power = 1 ; // Represents place values (1, 10, 100, ...)
    while (n>0)
    {
        int remainder = n%2 ; // Get the remainder (0 or 1)
        BinNum += remainder * power ;
        power = power * 10 ; // Move to the next binary place
        n = n/2; // Update the decimal number
       
    }
    cout<<BinNum<<endl ;
    
}
int main() {
    DecToBin(10);
    return 0;
}