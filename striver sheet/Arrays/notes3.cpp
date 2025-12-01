#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
   int x,y;
   cin>>x;
   cin>>y;
   int gsum=0;
   int lsum=0;
   int i=x;
   int temp1=0;
   int temp2=0;
   while(gsum!=0)
   {
       if(i%y==0)
       {
          gsum=i; 
       }
       i++;
   }
   int j=x;
   while(lsum!=0)
   {
       if(j%y==0)
       {
           lsum=j;
       }
       j--;
   }
   temp1=gsum-x;
   temp2=x-lsum;
   if(temp1>temp2)
   {
       cout<<lsum;
   }
   else
     cout<<gsum;
 
 
 return 0;
 
}