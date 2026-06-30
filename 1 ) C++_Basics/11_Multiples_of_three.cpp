/*
==================================================
QUESTION
==================================================

Write a C++ program to print all multiples
of 3 between 10 and 50 (inclusive)
using a for loop.

The program should display each multiple
on a new line.

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    for (int i = 10; i <= 50; i++)
    {
        if (i % n == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}