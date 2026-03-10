#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r;
    cout<<"Enter the radius of the sphere: ";
    cin>>r;
    if(r>0)
    {
        cout<<"The volume of the sphere is: "<<(4.0/3.0)*3.14*pow(r,3)<<endl; //M_PI  is a macro which
        // expands t0 double precision of pi
    }
    else 
    {
        cout<<"Radius must be a positive number."<<endl;
    }
}