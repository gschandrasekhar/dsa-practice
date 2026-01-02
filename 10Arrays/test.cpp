#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int max=INT_MIN;
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++)
   {
    if(max<arr[i]) max=arr[i];
   }

   cout<<"Largest "<<max;
   
   
  return 0;
}