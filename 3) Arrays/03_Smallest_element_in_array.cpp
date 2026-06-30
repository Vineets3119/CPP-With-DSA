/*
=================================
QUESTION
=================================

Write a function to find
the smallest element in
an array.

=================================
*/


#include <iostream>
using namespace std;

int Smallest_number(int arr[] , int n){
    
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest ;
}

int main() 
{
    int arr[] = {5,6,7,3,1,2} ;
    int n = sizeof(arr)/sizeof(int);
    cout<<"Smallest Number : "<<Smallest_number(arr , n)<<endl ;
    return 0;
}