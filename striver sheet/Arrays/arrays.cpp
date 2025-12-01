#include<bits./stdc++.h>
using namespace std;

int arr1[5]; //if we defined here, globally it stores 0's as garbage values
int main()
{
    int arr[6];  //stores garbage values if we defined like this

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<5;i++)
    {
         cout<<arr1[i]<<endl;
    }
    //max length/size of an array when u declared inside main function
    //is 10^6.
    //if globally then 10^7;
}