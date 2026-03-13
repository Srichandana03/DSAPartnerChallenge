#include<iostream>
using namespace std;

int checkPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        return 1; // Perfect number
    }
    else
    {
        return 0; // Not a perfect number
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(checkPerfect(n)) 
    {
        cout << n << " is a perfect number." << endl;
    }
    else 
    {
        cout << n << " is not a perfect number." << endl;
    }
}
    