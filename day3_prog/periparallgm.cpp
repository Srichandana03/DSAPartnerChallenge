#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter the values for a and b";
    cin>>a>>b;
    if(a>0 && b>0)
    {
        cout<<"Perimeter of the rectangle is: "<<2*(a+b);
    }
    else
    {
        cout<<"Invalid input! Length and width must be positive.";
    }
    return 0;
}



//note: to round off to decimal places,
// import package,#include <iomanip>
// use setprecision(n) where n is the number of decimal places you want to round off to.
// so the code is ,,,,, cout << fixed << setprecision(2) << result;