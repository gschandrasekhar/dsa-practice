#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"now second arr";
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    int z=n/2;
    cout<<arr1[z];

}