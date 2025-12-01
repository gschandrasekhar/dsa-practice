    //initialisation and declaration of Array
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int b[3]={1,2,3};
    int c[5]={1,2};  //remaining will be zero's
    //memory statically allocated at compile time in contiguious memory location
    


int array_size=sizeof(b)/sizeof(b[0]); 
 //a.size(), a.length() are works in vectors only
//cout<<array_size;
    //To access any element
    for(int i=0;i<array_size;i++)
    {
        cout<<b[i]<<endl;

    }

    //to knwo the address of any elements
    for(int i=0;i<array_size;i++)
    {
        cout<<&b[i]<<endl;
    }
return 0;

}