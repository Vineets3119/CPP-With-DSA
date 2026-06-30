/*
=================================
QUESTION
=================================

Write a function to find the
product of two numbers and
display the result.

=================================
*/

#include <iostream>
using namespace std;

int product(int a , int b){
    return a*b ;
}

int main() 
{
    cout<<"Product of Two Numbers : "<< product(9,8) << endl ;

    return 0;
}