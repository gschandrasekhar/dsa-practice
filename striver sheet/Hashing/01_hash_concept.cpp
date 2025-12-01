#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int arr[5]={1,3,2,1,3};


//precompute
int hash[13]={0};
for(int i=0;i<5;i++)
{
    hash[arr[i]]+=1;

}

int q;
cin>>q;
while(q--)
{
    int number;
    cin>>number;
    cout<<hash[number]<<endl;
}

    return 0;
}