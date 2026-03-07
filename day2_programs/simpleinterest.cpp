#include<iostream>
using namespace std;
int main()
{
    double principal, rate, time, simpleInterest;

    cout<<"Enter the principal amount: ";
    cin>>principal;

    cout<<"Enter the annual interest rate (in percentage): ";
    cin>>rate;

    cout<<"Enter the time (in years): ";
    cin>>time;

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    cout<<"The simple interest is: "<<simpleInterest<<endl;

    return 0;
}


