//sum-product of digits
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,prod=1,res;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        int digit=n%10;
        sum+=digit;
        prod*=digit;
        res=prod-sum;
        n/=10;
    }
    cout<<"Sum of digits: "<<sum<<endl;
    cout<<"Product of digits: "<<prod<<endl;
    cout<<"Result (product - sum): "<<res<<endl;
    return 0;
    
}