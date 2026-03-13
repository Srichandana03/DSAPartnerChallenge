#include<iostream>
using namespace std;

int HCF(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return HCF(b,a%b);
}
int LCM(int a,int b)
{
    return (a*b)/HCF(a,b);
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"HCF of "<<a<<" and "<<b<<" is: "<<HCF(a,b)<<endl;
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<LCM(a,b)<<endl;
}


