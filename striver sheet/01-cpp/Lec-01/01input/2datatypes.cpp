#include <bits/stdc++.h>
using namespace std;

int main()
{ // int : 4 bytes, 1 byte=8 bits, 8*4=32, 2^32
    int x = 10;
    cout << x << endl;
    // long: 4 bytes
    // unsigned long: 4 bytes 0 to 4............
    // long long : 8 bytes
    long k = 244567;
    cout << k << endl;
    long long y = 10823073027;

    cout << y << endl;

    // float: 4 bytes double : 8 byte
    // long double :10bytes
    float x1 = 5.6;
    float y1 = 5;
    cout << x1 << y1 << endl; // 5.6  5
    // string
    string s = "Hey John!";
    cout << s << endl;
    string str1;
    cin >> str1;
    cout << str1 << endl; // enter this sentence
    // it cannot take the whole sentece
    // use getline
    cin.ignore('\n'); // must use
    string str;
    getline(cin, str);
    cout << str << endl;
    // char :
    char ch1, ch2;
    ch1 = 'P';
    cin >> ch2;
    cout << ch2;
    return 0;
}