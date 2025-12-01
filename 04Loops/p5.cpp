//wap where user can keep enterning the numbers till they enter a multiple of 10

#include<iostream>
using namespace std;
int main()
{
  int n=0;
  while(true)
  {
    cin>>n;
    if(n%10==0)
    {
      cout<<n;
      break;
    }
  }
  return 0;
}
