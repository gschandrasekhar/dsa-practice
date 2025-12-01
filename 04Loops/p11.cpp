//fibonacci series;
#include<iostream>
using namespace std;
int main()
{
  int num;
  cin>>num;
  int first=0, second=1, third=0;
  for(int i=2;i<=num;i++)
  {
    third=first+second;
    first=second;
    second=third;
  }
  cout<<third;
  return 0;
}