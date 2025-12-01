//Wap to swap 2 numbers
#include<iostream>
using namespace std;

void swap(int a, int b)
{
  int  temp=a;
  a=b;
  b=temp;
  cout<<a<<" "<<b<<endl;
}

int main()
{  int a=10, b=20;
  swap(a,b);
  cout<<a<<" "<<b;
  return 0;
}