#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n]; //we are specifying length at compile time
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i]; //we are taking input from user and storing it in array
    }
    int smallest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }   
    }
    cout<<"The smallest element in the array is: "<<smallest;
    return 0;
}

