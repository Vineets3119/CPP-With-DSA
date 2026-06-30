/*
=================================
QUESTION
=================================

Write a C++ program to find
the largest element in
an array.

=================================
*/


#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 3, 8, 4, 9, 12};
    int n = sizeof(arr) / sizeof(int);
    int largest = arr[0];
    for (int i = 1; i < n; i++) // i=0 is 5 itself so its not necessary to check this.
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    cout << "Largest Element : " << largest << endl;
    return 0;
}