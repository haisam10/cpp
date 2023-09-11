/**
 * C program to enter marks of five subjects and find percentage and grade
 */

#include <iostream>
using namespace std;

int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    cout<<"Enter five subjects marks: "<<endl;
    cin>>phy>>chem>>bio>>math>>comp;


    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;

    cout<<"Percentage = "<<per;


    /* Find grade according to the percentage */
    if(per >= 90)
    {
        cout<<"Grade A";
    }
    else if(per >= 80)
    {
        cout<<"Grade B";
    }
    else if(per >= 70)
    {
        cout<<"Grade C";
    }
    else if(per >= 60)
    {
        cout<<"Grade D";
    }
    else if(per >= 40)
    {
        cout<<"Grade E";
    }
    else
    {
        cout<<"Grade F";
    }

    return 0;
}