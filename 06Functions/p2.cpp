//wap to know wehther the intput is even or odd
#include<iostream>
using namespace std;
bool isEven(int a)
{
  if(a%2==0)
    return true;
  else 
    return false;
}
int main()
{ 
  int n;
  cin>>n;
  cout<<isEven(n);
  return 0;
}