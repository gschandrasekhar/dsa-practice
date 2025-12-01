#include<bits/stdc++.h>
using namespace std;

void name(int i,int n)
{  
    if(i>n)
      return ;
    cout<<"Chandu"<<endl;
    name(i+1,n);


}
int main()
{  int n;
    cout<<"enter numner";
    cin>>n;
    name(1,n);
    return 0;
}