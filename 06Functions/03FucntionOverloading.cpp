#include<iostream>
using namespace std;
int sum(int a, int b)
{
  return a+b;
}

int sum(int a,int b, int c)
{
  return a+b+c;
}
float sum(float a, float b)
{
  return a+b;
}
int main()
{
  
  cout<<sum(3,4)<<endl;
  cout<<sum(4.5f,3.4f)<<endl;
  cout<<sum(1,2,3);
  return 0;
}