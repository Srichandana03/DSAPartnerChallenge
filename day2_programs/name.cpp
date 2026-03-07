#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name: ";
    getline(cin, name); //getline is used to read the entire line of input, including spaces 
    //u can also use cin>>name; but it will only read the first word of the input

    cout<<"Hello, "<<name<<"! Welcome to C++ programming."<<endl;

    return 0;
}