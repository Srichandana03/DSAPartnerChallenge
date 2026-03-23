// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter the elements of array: ";
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i]; //we are taking input from user and storing it in array
//     }
//     int i=0;
//     int j=n-1;
//     while(i<j)
//     {
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     cout<<"The reversed array is: ";
//     for(int i=0; i<n; i++)
//     {   
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//Reversing using STL 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i]; //we are taking input from user and storing it in array
    }
    reverse(arr.begin(),arr.end());
    cout<<"The reversed array is: ";
    for(int i=0; i<n; i++)
    {   
        cout<<arr[i]<<" ";
    }
    return 0;
}

//both are optimal
//but second is more efficient

