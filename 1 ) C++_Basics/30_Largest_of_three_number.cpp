/*
=================================
QUESTION
=================================

Write a function to find
and print the largest of
three numbers.

=================================
*/


#include <iostream>
using namespace std;

void largest_number(int a , int b , int c){
    if (a>b && a>c)
    {
        cout <<"Largest number is "<< a <<endl ;
    }
    else if (b>a && b>c)
    {
        cout<<"Largest number is "<< b << endl ;
    }
    else{
        cout<<"Largest number is "<< c << endl ;
    }
}
    
    


int main() {
    int a , b , c ;
    cout<<"Enter three numbers :";
    cin >> a >> b >> c ;

    largest_number(a , b , c);
    return 0;
}