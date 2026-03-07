#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int length = s.length();
    int start=0;
    int end=length-1;
    while(start<end)
    {
        if(s[start]==s[end])
        {
            start++;
            end--;
        }
        else 
        {
            cout<<s<<" is not a palindrome."<<endl;
            return 0;
        }
    }
    cout<<"palindrome."<<endl;
}