#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    char op;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<"Result: "<<n1+n2<<endl;
            break;
        case '-':
            cout<<"Result: "<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Result: "<<n1*n2<<endl;
            break;
        case '/':
        // if(n2!=0)
        //     {
        //         cout<<"Result: "<<n1/n2<<endl;
        //     }
        //     else
        //     {
        //         cout<<"Error: Division by zero is not allowed."<<endl;
        //     }
        //     break;
            cout<<"Result: "<<n1/n2<<endl;
            break;
        default:
            cout<<"Error: Invalid operator."<<endl;
    }
    return 0;
}