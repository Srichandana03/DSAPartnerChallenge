#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float l,w;
    cout<<"Enter the length and width of the rectangle: ";
    cin>>l>>w;
    if(l>0 && w>0)
    {
        cout<<"The perimeter of the rectangle is: "<<2*(l+w)<<endl;
    }
    else 
    {
        cout<<"Length and width must be positive numbers."<<endl;
    }
    return 0;

}
