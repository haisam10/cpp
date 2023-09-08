/**
 * C program to check divisibility of any number
 */

#include<iostream>
using namespace std;

int main()
{
    int num;

    /* Input number from user */
    cout<<"enter the number: ";
    cin>>num;

    if((num % 5 == 0) && (num % 11 == 0))
    {
        cout<<"Number is divisible by 5 and 11";
    }
    else
    {
        cout<<"Number is not divisible by 5 and 11";
    }

    return 0;
}