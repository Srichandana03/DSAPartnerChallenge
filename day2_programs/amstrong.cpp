#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ori=n,d,sum=0;
    while(n>0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if(sum==ori)
    {
        cout<<ori<<" is an Armstrong number."<<endl;
    }
    else
    {
        cout<<ori<<" is not an Armstrong number."<<endl;
    }
    return 0;

}