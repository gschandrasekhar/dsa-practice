#include <bits/stdc++.h>
using namespace std;
int main()
{ 
 int A[10]={1,2,3,4,5,6};
 int index;
 cin>>index;
 int length=6;

 if(index>=0 && index<length)
 {
   for(int i=index;i<length-1;i++)
   {
    A[i]=A[i+1];

   }
   length--;
   for(int i=0;i<length;i++)
   {
    cout<<A[i]<<" ";
   }
   
 }
 else
 {
  cout<<"enter the crct index";
 }
 return 0;
}