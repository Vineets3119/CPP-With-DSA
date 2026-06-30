/*
==================================================
QUESTION 2
==================================================

Enter the cost of 3 items from the user
(using float data type):

1. Pencil
2. Pen
3. Eraser

Output the total cost of all items
as the final bill.

--------------------------------------------------

Advanced Problem:

Add 18% GST tax to the total bill
and display the final amount.

==================================================
*/

#include <iostream>
using namespace std;

int main()
{
    float pencil, pen, eraser;
    cout << "Enter the cost of pencil : ";
    cin >> pencil;
    cout << "Enter the cost of pen : ";
    cin >> pen;
    cout << "Enter the cost of eraser : ";
    cin >> eraser;
    float total_cost = pencil + pen + eraser;
    cout << "The total cost of items is : " << total_cost << endl;
    float gst = total_cost * 0.18;
    float final_amount = total_cost + gst;
    cout << "The final amount after adding GST is : " << final_amount << endl;
    return 0;
}