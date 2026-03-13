#include<iostream>
using namespace std;

int Palindrome(int n)
{
    int rev=0,rem,temp;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(Palindrome(n))
    {
        cout<<n<<" is a palindrome number."<<endl;
    }
    else
    {
        cout<<n<<" is not a palindrome number."<<endl;
    }
}








