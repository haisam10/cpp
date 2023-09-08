/**
 * C program to print number of days in a month
 */

#include <iostream>
using namespace std;

int main()
{
    int month;

    /* Input month number from user */
    cout<<"Enter month number (1-12): ";
    cin>>month;


    if(month == 1)
    {

        cout<<"31 days";
    }
    else if(month == 2)
    {
        cout<<"28 or 29 days";
    }
    else if(month == 3)
    {
        cout<<"31 days";
    }
    else if(month == 4)
    {
        cout<<"30 days";
    }
    else if(month == 5)
    {
        cout<<"31 days";
    }
    else if(month == 6)
    {
        cout<<"30 days";
    }
    else if(month == 7)
    {
        cout<<"31 days";
    }
    else if(month == 8)
    {
        cout<<"31 days";
    }
    else if(month == 9)
    {
        cout<<"31 days";
    }
    else if(month == 10)
    {
        cout<<"31 days";
    }
    else if(month == 11)
    {
        cout<<"30 days";
    }
    else if(month == 12)
    {
        cout<<"31 days";
    }
    else
    {
        cout<<"Invalid input! Please enter month number between (1-12)";
    }

    return 0;
}