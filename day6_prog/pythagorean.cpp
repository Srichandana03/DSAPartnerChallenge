//pythagorean triplet
#include <iostream>
using namespace std;    
int checkPythagorean(int a, int b, int c) 
{
    if (a * a + b * b == c * c) 
    {
        return 1; // Pythagorean triplet
    } 
    else 
    {
        return 0; // Not a Pythagorean triplet
    }
}
int main() 
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (checkPythagorean(a, b, c)) 
    {
        cout << a << ", " << b << ", and " << c << " form a Pythagorean triplet." << endl;
    } 
    else 
    {
        cout << a << ", " << b << ", and " << c << " do not form a Pythagorean triplet." << endl;
    }
    return 0;
}