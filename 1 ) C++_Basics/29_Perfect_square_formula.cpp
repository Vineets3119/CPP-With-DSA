/*
=================================
QUESTION
=================================

Write a function that takes
two numbers as parameters
and returns the value of:

a² + b² + 2ab

=================================
*/


#include <iostream>
using namespace std;

int perfect_square(int a , int b){
   // return (a+b)*(a+b);
   return (a*a)+(b*b)+(2*a*b);
}

int main() {
    int a ;
    int b ;
    cout<<"Enter the value of a : ";
    cin>>a ;
    cout<<"Enter the value of b : ";
    cin>>b ;

    cout<<"Result : "<<perfect_square(a,b)<<endl ;
    return 0;
}