#include<iostream>
using namespace std;
int a=10;  //global scope

int Add(int n,int m)
{
  int sum=n+m;  //local scope
}
int main()
{
   cout<<a;   //global scope
   cout<<sum;   //not declared in this scope

  return 0;
}