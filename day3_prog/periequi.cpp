//perimeter of equilateral triangle

#include<iostream>
using namespace std;
int main()
{
    float s;
    cout<<"Enter the side of the triangle: ";
    cin>>s;
    if(s>0)
    {
        cout<<"Perimeter of the equilateral triangle is: "<<3*s;
    }
    else
    {
        cout<<"Invalid input! Side length must be positive.";
    }
    return 0;
}