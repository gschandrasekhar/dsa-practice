#include<iostream>
using namespace std;

void doSomething(int num)
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