//billing items with tax'
#include<iostream>
using namespace std;
int main()
{
  float pencil, pen, eraser;
  cin>>pencil>>pen>>eraser;
  float cost=pencil+pen+eraser;
  float Amount=cost+cost*0.18;
  cout<<"Total Amount is"<<Amount;
  return 0;
}