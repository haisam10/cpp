/**
 * C program to check whether a character is vowel or consonant
 */

#include <iostream>
using namespace std;

int main()
{
    char ch;

    /* Input character from user */
    cout<<"Enter any character: ";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<ch<<"is vowel";
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<ch<<" is Consonant";
    }
    else 
    {
        cout<<ch<<" is not an alphabet";
    }

    return 0;
}