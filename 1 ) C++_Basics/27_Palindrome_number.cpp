/*
=================================
QUESTION
=================================

Write a function to check
whether a given number is
a Palindrome or not.

=================================
*/



#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reverse = 0;

    while (num > 0) {
        int last_digit = num % 10;
        reverse = reverse * 10 + last_digit;
        num = num / 10;
    }

    return reverse;
}

// Function to check palindrome
bool is_palindrome(int n) {
    if(n == reverseNumber(n)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;

    cout << "Enter your Number: ";
    cin >> n;

    if (is_palindrome(n)) {
        cout << n << " is a Palindrome Number." << endl;
    }
    else {
        cout << n << " is not a Palindrome Number." << endl;
    }

    return 0;
}
