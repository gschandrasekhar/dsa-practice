/*
1        1
12      21
123    321
1234  4321
1234554321
*/

#include<iostream>
using namespace std;
int main()
{
 int n=5;
for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
        cout<<j;
    }
    for(int j=0;j<2*(n-i);j++)
    {
        cout<<" ";
    }
    for(int j=i;j>0;j--)
    {
        cout<<j;
    }
    cout<<endl;
  }

 return 0;
}
