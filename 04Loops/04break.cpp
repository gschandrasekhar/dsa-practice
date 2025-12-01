#include<iostream>
using namespace std;
int main()
{  //break is used to exit the loop
  for(int i=0;i<10;i++)
  { cout<<i<<" ";
    if(i==3)
     break;
  }
  return 0;
}