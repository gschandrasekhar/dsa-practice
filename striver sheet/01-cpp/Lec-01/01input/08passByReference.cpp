#include<iostream>
using namespace std;
//no need to use & for arrays, they are default use pass by reference

void doSomething(int &num)
{
    cout<<num<<endl;
    num+=10;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main()
{
    int num=10;
    doSomething(num);
    cout<<num;
    return 0;
}