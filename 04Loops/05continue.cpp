#include<iostream>
using namespace std;
int main()
{
  //continue will skip the iteration ;
  for(int i=0;i<10;i++)
  {
    
    if(i==3)
    continue;
    cout<<i<<" ";
  }
  return 0;
}