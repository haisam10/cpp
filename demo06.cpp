/**
 * C program to check Leap Year
 */

#include<iostream>
using namespace std;
int main()
{
    int year;

    /* Input year from user */
    cout<<"enter the year: ";
    cin>>year;

    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"not leap year";
    }

    return 0;
}