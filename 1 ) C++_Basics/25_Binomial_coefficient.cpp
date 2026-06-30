/*
=================================
QUESTION
=================================

Write a recursive function
to calculate the Binomial
Coefficient C(n, r).

=================================
*/


#include <iostream>
using namespace std;

int factorial(int n){
    if (n==1||n==0)
    {
        return 1 ;
    }
    else{
        return n * factorial(n-1);
    }
}

int binomial(int n , int r){
    int val1 = factorial(n) ;
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1/(val2*val3);

    return result ;

}
int main() {
    cout<<"Binomial coefficient of : "<<binomial(8,6)<< endl ;
    return 0;
}