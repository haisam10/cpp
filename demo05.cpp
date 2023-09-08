/**
 * C program to check even or odd number
 */

#include<iostream>
using namespace std;

int main()
{
    int num;

    /* Input number from user */
    cout<<"enter the number: ";
    cin>>num;
    
    /* Check if the number is divisible by 2 then it is even */
    if(num % 2 == 0)
    {
        /* num % 2 is 0 */
        cout<<"even";
    }
    else
    {
        /* num % 2 is 1 */
        cout<<"odd";
    }

    return 0;
}