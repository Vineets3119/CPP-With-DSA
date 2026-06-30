/*
=================================
QUESTION
=================================

Write a function to find
the sum of the digits of
a given number.

=================================
*/


#include <iostream>
using namespace std;

int sum_of_digit(int num){
    int sum = 0 ;
    while (num>0)
    {
    int last_digit = num%10 ;
    sum += last_digit ;
    num = num/10 ;
    }
    
    return sum ;
}

int main() 
{
    int x ;
    cout<<"Enter your number :";
    cin>>x ;

    cout<<"Sum of the digits of  "<<x<<" is "<<sum_of_digit(x)<<endl ;


    return 0;
}


