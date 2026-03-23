// //Second Largest and Second Smallest Element in an Array

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n]; //we are specifying length at compile time
//     cout<<"Enter the elements of array: ";
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i]; //we are taking input from user and storing it in array
//     }
//     int largest=arr[0];
//     int slargest=INT_MIN;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>largest)
//         {
//             slargest=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]>slargest && arr[i]!=largest)
//         {
//             slargest=arr[i];
//         }
//     }
//     cout<<"The second largest element in the array is: "<<slargest;
//     int smallest=arr[0];
//     int ssmallest=INT_MAX;
//     {
//         for(int i=1;i<n;i++)
//         {
//             if(arr[i]<smallest)
//             {
//                 ssmallest=smallest;
//                 smallest=arr[i];
//             }
//             else if(arr[i]<ssmallest && arr[i]!=smallest)
//             {
//                 ssmallest=arr[i];
//             }
//         }
//         cout<<"The second smallest element in the array is: "<<ssmallest;

//     }
// }

// the above code is correct but we can optimize
// it by using only one loop instead of two loops 

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n); //dynamically allocated array using vector
    cout<<"Enter the elements of array: ";
    int largest=INT_MIN;
    int slargest=INT_MIN;
    int smallest=INT_MAX;
    int ssmallest=INT_MAX;
    for(int i=0; i<n; i++)      
    {
        cin>>arr[i]; //we are taking input from user and storing it in array
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>slargest && arr[i]!=largest)
        {
            slargest=arr[i];
        }
        if(arr[i]<smallest)
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<ssmallest && arr[i]!=smallest)
        {
            ssmallest=arr[i];
        }

    }
    cout<<"The second largest element in the array is: "<<slargest<<endl;
    cout<<"The second smallest element in the array is: "<<ssmallest;
    return 0;
}
//we are writing it in only in one loop
//satisfying conditions and complexities