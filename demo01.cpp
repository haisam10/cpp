/*
Write a C program to find maximum between two numbers.
*/
#include<iostream>
using namespace std;
int main() {
    int num1, num2;

    cout<<"enter the number: "<<endl;
    cin>>num1;
    cin>>num2;

    /* If num1 is maximum */
    if(num1 > num2)
    {
        cout<<num1<<"is maximum";
    }

    /* If num2 is maximum */
    if(num2 > num1)
    {
        cout<<num2<<"is maximum";
    }

    /* Additional condition check for equality */
    if(num1 == num2)
    {
        cout<<"Both are equal";
    }
    
    return 0;
}