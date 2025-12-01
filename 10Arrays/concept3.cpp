//to increase size of an array
#include<iostream>
using namespace std;
int main()
{
int *p, *q;
p=new int[5];

p[0]=1;
p[1]=2;
p[2]=3;
p[3]=4;
p[4]=5;

//to increase the size of p, we created q of size 10
q=new int[10];

//copying values of p to q;
for(int i=0;i<5;i++)
{
    q[i]=p[i];
}
//deleting p
delete []p;
p=q;
//making q pointint to null;
q=NULL;

for(int i=0;i<5;i++)
{
    cout<<p[i]<<endl;
}


}