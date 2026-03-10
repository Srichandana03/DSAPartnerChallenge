//surface area of cylinder
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r,h;
    cout<<"Enter the radius and height of the cylinder: ";
    cin>>r>>h;
    if(r>0 && h>0)
    {
        cout<<"The surface area of the cylinder is: "<<2*3.14*r*h<<endl; 
    }
    else
    {
        cout<<"Radius and height must be positive numbers."<<endl;
    }
    return 0;
}