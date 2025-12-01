#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age1;
    cin >> age1;
    if (age1 >= 18)
        cout << "yes";
    else
        cout << "No";

    // que 2
    int marks;
    cin >> marks;
    if (marks >= 80 && marks <= 100)
    {
        cout << "A";
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "B";
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "C";
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "D";
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "E";
    }
    else if (marks >= 0 && marks <= 24)
    {
        cout << "F";
    }
    else
        cout << "Enter crct marks";

    // que 3:
    int age;
    cin >> age;
    if (age > 0 && age < 18)
    {
        cout << "Not eligible for job";
    }
    else if (age >= 18 && age <= 54)
    {
        cout << "Eligible for job";
    }
    else
    {
        if (age >= 55 && age <= 57)
        {
            cout << "Eligible, but retienrment soon";
        }
        else if (age > 57)
        {
            cout << "Retierment time ";
        }
    }
    return 0;
}