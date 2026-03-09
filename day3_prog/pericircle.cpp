//perimeter of circle

#include <iostream>
using namespace std;
int main()
{
    float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    if(r>0)
    {
        cout<<"Perimeter of the circle is: "<<2*3.1416*r;
    }
    else
    {
        cout<<"Invalid input! Radius must be positive.";
    }
    return 0;
}