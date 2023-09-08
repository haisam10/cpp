/**
 * C program to check positive negative or zero using simple if statement
 */

#include<iostream>
using namespace std;
int main()
{
    int num;
    
    /* Input number from user */
    cout<<"enter the number: ";
    cin>>num;
    

    if(num > 0)
    {
        cout<<"number is positive";
    }
    if(num < 0)
    {
        cout<<"number is negative";
    }
    if(num == 0)
    {
        cout<<"number is zero";
    }

    return 0;
}