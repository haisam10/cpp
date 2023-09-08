/**
 * C program to check alphabet, digit or special character
 */

#include <iostream>
using namespace std;

int main()
{
    char ch;

    /* Input character from user */
    cout<<"Enter any character: ";
    cin>>ch;


    /* Alphabet check */
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<ch<<" is alphabet";
    }
    else if(ch >= '0' && ch <= '9')
    {
        cout<<ch<<" is digit";

    }
    else 
    {
        cout<<ch<< is special character;
    }

    return 0;
}