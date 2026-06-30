/*
=================================
QUESTION
=================================

Write a function to print
all Prime Numbers in the
range from 2 to N.

=================================
*/


#include <iostream>
using namespace std;

bool is_prime(int n){
    if (n<=1)
    {
        return false ;
    }
    for (int i = 2; i*i <= n; i++)
        {
            if (n%i==0)
            {
                return false ;
            }
            
        }
        {
            return true ;
        }
}
// for range 
void all_Prime(int n){
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            cout<<i<<"  ";
        }
        
    }
    cout<<endl ;
}

int main() {
    all_Prime(13);
    return 0;
}