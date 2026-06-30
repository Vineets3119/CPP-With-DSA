/*
=================================
QUESTION
=================================

Write a function that takes
a character as input and
returns the next character
in the English alphabet.

If the input is 'z',
return 'a'.

=================================
*/

#include <iostream>
using namespace std;

char next_character(char ch){
    if (ch=='z')
    {
        return 'a' ;
    }
    else{
        return ++ch ;
    }
}


    

int main() {
    char ch ;
    cout<<"Enter your character :";
    cin>>ch ;

    cout<<"Next character : "<<next_character(ch)<<endl ;
    return 0;
}