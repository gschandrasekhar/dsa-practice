#include <bits/stdc++.h>
using namespace std;

int main()
{ // vecotrs are containers which are dynamic in nature, always increase size

    // to declare vector
    vector<int> v1;

    // to insert data
    v1.push_back(1);    //{1}
    v1.emplace_back(2); //{1,2}
    v1.push_back(3);
    v1.push_back(4);

    // vector.pair<int, int> v2;
    // v2.push_back({1, 2});
    // v2.emplace_back(1, 2);

    // intilaisationa dn declaration

    vector<int> v3(5, 100); // continaer of size 5 is cretaed and filled with 100

    vector<int> v4(5); // container of size 5 with 0 or garbage value is created

    //
    vector<int> v5(5, 20);
    vector<int> v6(v5); // copy of v5 will be created

    // To access the elements
    cout << v3[0] << endl;
    //
    vector<int>::iterator it = v1.begin(); // it points to memorey of v1 , in order to print this use pointers

    it++;
    cout << *(it) << " " << endl; // 2
    it = it + 2;
    cout << *(it) << " "<<endl; // 4
    // some other iterators
   vector<int>::iterator it2=v1.end();
   cout<<*(it2)<<endl;
   

   //

   cout<<v1.back()<<endl;  //the last element

   //use for loop,
   for(vector<int>::iterator it4=v1.begin();it4 !=v1.end();it4++)
   {
    cout<<*(it4)<<" ";
   }
   cout<<endl;
   //shorcut
   for(auto it5=v1.begin();it5!=v1.end();it5++)
   {
    cout<<*(it5)<<" ";
   }
   cout<<endl;

   //using for each loop
   for(auto it6:v1)
   {
    cout<<it6<<" ";
   }
   cout<<endl;

   //to delete a vector
   v1.erase(v1.begin()+1);  //{1,3,4};

   //to delete mutiple elements
   v1.erase(v1.begin()+1,v1.begin()+3);  //elements of  begin +1,+2 will delete

   //to insert elements
   vector<int>vec(2,100);  //{100,100}
   vec.insert(vec.begin(),300); //{300,100,100}
   vec.insert(vec.begin()+1,2,10);  //{300,10,10,100,100}


   //to know the size
   cout<<vec.size()<<endl;

   //to remove last element
   vec.pop_back();
   cout<<vec.size()<<endl;

   //to swap to vector
   vector<int> p1(2,10);
   vector<int> p2(2,20);
   p1.swap(p2);

   for(auto it7:p1)
   {
    cout<<it7<<" ";  //20 20 swapped
   }
   cout<<endl;

   //to clear an entire vector
   p1.clear();

   //to know empty or not
   cout<<p1.empty();  //1 False
   //0 True 
    return 0;
}