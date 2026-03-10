#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float s;
    cout<<"Enter the side length of the square: ";
    cin>>s;
    if(s>0)
    {
        cout<<"The perimeter of the square is: "<<4*s<<endl;
    }
    else 
    {
        cout<<"Side length must be a positive number."<<endl;
    }
    return 0;
}

