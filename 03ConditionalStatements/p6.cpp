//take input from user and let them knwo if it is postive, negaitve or zero
#include<iostream>
using namespace std;
int main()
{
  int num;
  cin>>num;
  if(num>0) cout<<"Positive";
  else if(num<0) cout<<"Negative";
  else cout<<"Zero";
  return 0;
}