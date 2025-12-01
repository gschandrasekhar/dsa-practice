#include<bits/stdc++.h>
using namespace std;
int main()
{
  int size;
  cin>>size;
  int *arr=new int[size];
  *arr=1010;
  cout<<*arr;
  delete []arr;
  return 0;
}