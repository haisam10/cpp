/**
 * C program to check whether a character is uppercase or lowercase 
 */

#include <iostream>
using namespace std;
int main()
{
    char ch;

    /* Input character from user */
    cout<<"Enter any character: ";
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c'.", ch);
        cout<<ch<<" is uppercase alphabet";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout<<ch<<" is lowercase alphabet";
    }
    else
    {
        cout<<ch<<" is not an alphabet";
    }

    return 0;
}