#include<iostream>
using namespace std;
int checkPrime(int n)
{
    if(n <= 1) 
    {
        return 0; // Not prime
    }
    if(n==2)
    {
        return 1; // 2 is prime
    }
    if(n%2==0)
    {
        return 0; // Even numbers greater than 2 are not prime
    }
    for(int i=3; i*i<=n; i+=2) 
    {
        if(n % i == 0) 
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(checkPrime(n)) 
    {
        cout << n << " is a prime number." << endl;
    }
    else 
    {
        cout << n << " is not a prime number." << endl;
    }
}