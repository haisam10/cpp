/**
 * C program to check whether a character is alphabet or not
 */

#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    /* Input a character from user */
    cout<<"Enter any character: ";
    cin>>ch;
    

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<"it's ALPHABET";
    }
    else
    {
        cout<<"it's not ALPHABET";
    }

    return 0;
}