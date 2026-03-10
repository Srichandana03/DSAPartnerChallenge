#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float b,h;
    cout<<"Enter the base and height of the prism: ";
    cin>>b>>h;
    if(b>0 && h>0)
    {
        cout<<"The volume of the prism is: "<<b*h<<endl;
    }
    else 
    {
        cout<<"Base and height must be positive numbers."<<endl;
    }
    return 0;
}