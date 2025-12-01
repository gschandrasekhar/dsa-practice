#include <bits/stdc++.h>
using namespace std;
 void sum(int a ,int b)
    {
        cout<<a+b;
    }
int multiple(int a,int b)
{
    return a*b;
}
int main()
{ // funcations are set of codd which performs seomwthing for u
    // functions are used to modularise code
    // functions are used to increase readability
    // functions are used to use same code mutltiple times

    // void function: doesnt returns anything
   //return : return something

    int a;
    int b;
    cin>>a>>b;

    sum(a,b);
   cout<<multiple(a,b);

   //inbult functons
   int mini=min(a,b);
   cout<<mini;

   int maxi=max(a,b);
   cout<<maxi;


    return 0;
}