#include<iostream>
using namespace std;
int main()
{
    float s;
    cout<<"Enter the side of the triangle: ";
    cin>>s;
    if(s>0)
    {
        cout<<"Area of the equilateral triangle is: "<<(1.732/4)*s*s;
    }
    else
    {
        cout<<"Invalid input! Side length must be positive.";
    }
    return 0;
}
