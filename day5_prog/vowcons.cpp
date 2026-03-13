#include<iostream>
using namespace std;

int checkVowel(char ch) 
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
    {
        return 1; // Vowel
    }
    else 
    {
        return 0; // Consonant
    }
}
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(checkVowel(ch)) 
    {
        cout << ch << " is a vowel." << endl;
    }
    else 
    {
        cout << ch << " is a consonant." << endl;
    }

}