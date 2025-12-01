#include<bits/stdc++.h>
using namespace std;
int main()
{   int ans=0;
   vector<int>v1={4,1,2,1,2};
   for(int value:v1){
    ans=ans^value;
   }    
   cout<<ans;
}