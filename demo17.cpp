/**
 * C program to find all roots of a quadratic equation
 */

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;
    
    cout<<"Enter values of a, b, c of quadratic equation (aX^2 + bX + c): "<<endl;
    cin>>a>>b>>c;
    
    /* Find discriminant of the equation */
    discriminant = (b * b) - (4 * a * c);
    
   
    /* Find the nature of discriminant */
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout<<"Two distinct and real roots exists: " <<root1<<"and"<<root2;
    }
    else if(discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("%.2f and %.2f", root1, root2);
        cout<<"Two equal and real roots exists: "<<root1<<"and"<<root2;
    }
    else if(discriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);

        cout<<"Two distinct complex roots exists: "<<root1<<imaginary<<"and"<<root2<<imaginary;
    }

    return 0;
}
