#include<bits/stdc++.h>
using namespace std;
void print()
{
    cout<<"chandu";
}
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    print();
    cout<<endl;

    int a=sum(1,5);
    cout<<a;
    cout<<endl;

    //stl is divided in to 4 parts
    //algorithms
    //containers
    //functions
    //iterators
    //--
    //pairs= it is a kind of utility property
    pair<int,int> p={1,3};
    cout<<p.first<<"  "<<p.second<<endl;
    //smae for other data types

    //nested property of pair
    pair<int,pair<int,int>> q={1,{3,4}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second;
    cout<<endl;

    //declaring a pair array
    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first;
    cout<<endl;

    //vectors= it is a container which is in dynamic in nature.
    //it stores elements

    vector<int> v;  //creates an empty container

    v.push_back(1);  //takes one into it {1}
    v.emplace_back(2); //dyamically increases it size and takes 2 after one;{1,2}
    

    //to define a vector of pair data type
    vector<pair<int,int>>vect;
    vect.push_back({1,2});
    vect.emplace_back(1,2); //automatically takes a apair

    //another example
    vector<int>vic(5,100); //cotnainer of size 5 instances,of 100's got created {100,100,100,100,100}

    vector<int>vec(5); //container of size 5, of any garbage values are created 

    vector<int>v1(5,20);  //{20,20,20,20,20}
    vector<int>v2(v1); //copy of v1 is created, {20,20,20,20,20}
    //to access elements on vector
    //1st menthod  : jusrt like arrays
    cout<<vic[0]<<endl;
    //through 2nd method:iterators

    vector<int>::iterator sc=vic.begin();  //points to memory, so it prints address
    sc++;
    cout<<*(sc)<<" "<<endl;  //prints only one value
    sc=sc+2;
    cout<<*(sc)<<" "<<endl;


    //
    vector<int>raj;
    raj.emplace_back(10);
    raj.emplace_back(20);
    raj.emplace_back(30);
    raj.emplace_back(40);
    //
    vector<int>::iterator st=raj.end();  //strRT FROM end
    st--;
    cout<<*(st)<<endl;  //40
    // vector<int>::iterator st=raj.rend();  //same as begin

    // vector<int>::iterator st=raj.rbegin(); //same as end

    cout<<raj.back()<<" "<<endl;  //40 (last element)
//for loop
    for(vector<int>:: iterator it=raj.begin(); it!=raj.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
//shortcut
for(auto it=raj.begin();it!=raj.end();it++)
{
    cout<<*(it)<<" ";
}
cout<<endl;

//for each loop
for(auto it: raj){
    cout<<it<<" ";
}
cout<<endl;

//-----------------
//to delete somehting
raj.erase(raj.begin()+1);  //deleted 20;

//to delete multiple elements
raj.erase(raj.begin(),raj.begin()+2); //deleted 10,30

//---------
//insert functiin
vector<int>v3(2,100); //{100,100}
v3.insert(v3.begin(),300);  //{300,100,100}
v3.insert(v3.begin()+1,2,10);  //{300,10,10,100,100}

//
vector<int>copy(2,50); //{50,50};
v3.insert(v3.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

//{10,20}
// cout<<v4.size();            //2

// v4.pop_back(); //{10};

//v4->{10,20}
//v5->{30,40}
// v4.swap(v5); //v4->{30,40}, v5->{10,20}

// v4.clear();//erases all entire vector

cout<<v1.empty(); //1=false. 0=true



//lists= is a container which is dynamic in nature
//31:25
list<int> ls; // to create a list 
ls.push_back(2);//{2}
ls.emplace_back(4);//{2,4}
ls.push_front(5); //{5,2,4}
ls.emplace_front(); 

//rest functions as same as vector
//begin,end,rbegin,rend,clear,insert,size,swap

//-deque
deque<int>dq;
dq.push_back(1);  //{1}
dq.emplace_back(2); //{1,2}
dq.push_front(4);  //{4,1,2}
dq.emplace_front(3); //{3,4,1,2}
dq.pop_back();  //{3,4,1}
dq.pop_front();  //{4,1}
dq.back();
dq.front();
//rest function s same as vector
//begin , end, rbegin, rend,clear, insert,size, swap

//stack--------
stack<int> st;
st.push(1);  //{1}
st.push(2); //{2,1}
st.push(3); //{3,2,1}
st.push(3);  //{3,3,2,1}
st.emplace(5);  //{5,3,3,2,1}
cout<<st.top();   //5
st.pop(); //{5,3,3,2,1}
cout<<st.size();  //4
cout<<st.empty();  //false

stack<int>st1, st2;
st1.swap(st2);

//queue ds
queue<int> q;
q.push(1);  //{1}
q.push(2);  //{1,2}
q.emplace(4);  //{1,2,4}

q.back()+=5
cout<<q.back();  //print 9
//q is {1,2,9}
cout<<q.front(); //1
q.pop(); //1 out {2,9}
cout<<q.front();  //prints2
//size swap empty same as stack


//priority queue
priority_queue<int> pq;
pq.push(5); //{5}
pq.push(2); //{5,2}
pq.push(8);  //{8,5,2}
pq.emplace(10); //{10,8,5,2}
cout<< pq.top();  //prints 10
pq.pop();  //{8,5,2}
cout<<pq.top();  //prints 8

//minimum heap
priority_queue<int,vector<int>,greater<int> pq;
pq.push(5);  //{5}
pq.push(2);  //{2,5}
pq.push(8);//{2,5,8}
pq.emplace(10);  //{2,5,8,10}
cout<<pq.top();  //prints 2


//set ----------
//stores everything in sorted order and only unique
set<int>st;
st.insert(1); //{1}
st.emplace(2); //{1,2}
st.insert(2);  //{1,2}
st.insert(4);  //{1,2,4}
st.insert(3);  //{1,2.3,4}

//functionality of insert in vector
//cam be used also that only increases
//efficiency
//begin(), end(), rbegin(), rend(), size()
//empty and swap() are same as those of above

auto it=st.find(3);  //returns iterator

auto it=st.find(8);  //st.end()

st.erases(5);  //earses 5 //takes logarthimic time

int cnt=st.count(1);  // if 1 or 0
auto it=st.find(3);

st.erase(it);  //it takes constant time
// {1,2,3,4,5}
auto it1=st.find(2);
auto it2=st.find(4);
st.erase(it1,it2)  // after earse {1,4,5}
//lower_bound() and upper_bound function works in the same way
//as in vector it does

//this is the syntax
auto it = st.lower_bound(2);
auto it=st.upper_bound(3);



//multiset ----------------
//everything is same as set 
//only stores duplicate elements also
multiset<int> ms;
ms.insert(1);//{1}
ms.insert(1); //{1,1}
ms.insert(1); //{1,1,1}
ms.erase(1)   //all 1's erased

int cnt=ms.count(1);
//only a single one erased

ms.erase(ms.find(1));

ms.eraset(ms.find(1),ms.find(1)+2);
//rest all function same as set



//unordered set==========
unordered_set<int> st;
//lower_bound and upper_bound functions
//does not works, rest all functions are same
//as above , it does not stores in any
//particular order it has a better complexity
//then set in most cases, exceot some whe  collosin happens


//map--------------
map<int,int> mpp;
map<int,pair<int,int>>mpp;
map<pair<int, int>,int>mpp;
mpp[1]=2;
mpp.emplace({3,1});

mpp.insert({2,4});
mpp[{2,3}]=10;
{
    {1,2}
    {2,4}
    {3,1}
}
for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;
    cout<<mpp[1]; //2
    cout<<<mpp[5];  //null or 0
    auto it=mpp.find(3);
    cout<<*(it).second;

    auto it=mpp.find(5);  

    //..this is the syntx
    auto it=mpp.lower_bound(2);
    auto it=mpp.upper_bound(3);
    //erase , swap, size, empty, are same as follows

    //multimap------------
    //evryhting as map , only it cans tore ultiple keys
    //only map[key] cannpot be used here 
    //sorted order


    //unorderedMAP-------------
    //same as set and unordered_set difference 
    //have unique keys
   //=============================================================
   //algorithms
   //55:00:00
    
}
    return 0;

}
