//Total surface area of a cube
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float s;
    cout<<"Enter the side length of the cube: ";
    cin>>s;
    if(s>0)
    {
        cout<<"The total surface area of the cube is: "<<6*s*s<<endl;
    }
    else 
    {
        cout<<"Side length must be a positive number."<<endl;
    }
    return 0;

}
   