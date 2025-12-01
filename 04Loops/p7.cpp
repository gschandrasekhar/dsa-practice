//wap to find factorial of a number entered by user
#include<iostream>
using namespace std;
int main()
{
  int num;
  cin>>num;
  int d=0,fact=1;
  while(num>0)
  {
    fact=fact*num--;

  }
  cout<<fact;
  return 0;
}