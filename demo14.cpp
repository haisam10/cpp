#include <iostream>
using namespace std;

int main(){
    int angle1,angle2,angle3,sum;

    cout<<"Enter the three angle"<<endl;
    cin>>angle1>>angle2>>angle3;

    sum=angle1+angle2+angle3;

    if(sum==180)
    {
        cout<<"it's valid.";
    }
    else
    {
        cout<<"it's not valid.";
    }
}
