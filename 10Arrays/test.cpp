#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5]={1,2,3,4,5};
  int arr1[]={1,2,3,4,5,6,7,8};
  //size of array;
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<size;
  //to know address of any elements;
  for(int i=0;i<5;i++)
  {
    cout<<&arr<<endl;
  }
  return 0;
}