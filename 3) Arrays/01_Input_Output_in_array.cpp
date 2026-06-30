/*
=================================
QUESTION
=================================

Write a C++ program to input
the elements of an array
from the user and display
all the elements.

=================================
*/


#include <iostream>
using namespace std;

int main() 
{   
    int n ;
    cout<<"Enter length of Array :";
    cin>>n ;

    int arr[n];
    

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Element  "<<i+1<<" : " ;
        cin >> arr[i];
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"  ";
    }
    cout << endl ;
   

    return 0;
}