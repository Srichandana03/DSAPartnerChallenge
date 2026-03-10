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
        cout<<"The volume of the cylinder is: "<<M_PI*r*r*h<<endl; //M_PI  is a macro which
        // expands t0 double precision of pi
    }
    else 
    {
        cout<<"Radius and height must be positive numbers."<<endl;
    }
    return 0;
}