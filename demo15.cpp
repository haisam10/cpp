/**
 * C program to check whether a triangle is valid or not if its sides are given
 */

#include <iostream>
using namespace std;

int main()
{
    int side1, side2, side3;

    /* Input three sides of a triangle */

    cout<<"Enter three sides of triangle: "<<endl;
    cin>>side1>>side2>>side3;
    
    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2) 
            {
                cout<<"Triangle is valid.";
            }
            else
            {
                cout<<"Triangle is not valid.";
            }
        }
        else
        {
            cout<<"Triangle is not valid.";
        }
    }
    else
    {
        cout<<"Triangle is not valid.";
    }

    return 0;
}