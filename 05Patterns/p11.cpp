/*
5
45
345
2345
12345


*/
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=5;i>0;i--)
  {
    for(int j=i;j<=n;j++)
    {
      cout<<j;
    }
    cout<<endl;
  }
  return 0;
}