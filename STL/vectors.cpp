#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Initialization
    vector<int> v1;                // empty
    vector<int> v2(5, 1);          // {1,1,1,1,1}
    vector<int> v3 = {1, 2, 3, 4}; // initializer list
    vector<int> v4(v3);            // copy constructor

    // 2. Insertion & Access
    v1.push_back(10);
    v1.emplace_back(20);                            // faster
    v1.insert(v1.begin(), 5);                       // {5,10,20}
    v1.pop_back();                                  // {5,10}
    cout << v1[0] << " " << v1.at(1) << "\n";       // 5 10
    cout << v1.front() << " " << v1.back() << "\n"; // 5 10

    // 3. Iteration
    cout << "Iteration: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    for (auto x : v3)
        cout << x << " ";
    for (auto it = v3.begin(); it != v3.end(); it++)
        cout << *it << " ";
    cout << "\n";

    // 4. Capacity
    cout << "Size=" << v3.size() << " Capacity=" << v3.capacity() << "\n";
    v3.resize(6, 99); // {1,2,3,4,99,99}
    cout << "Resized: ";
    for (int x : v3)
        cout << x << " ";
    cout << "\n";
    v3.shrink_to_fit(); // reduce capacity

    // 5. Modifiers
    v3.assign(4, 7); // {7,7,7,7}
    vector<int> temp = {1, 2, 3};
    v3.swap(temp); // v3={1,2,3}, temp={7,7,7,7}

    // 6. Advanced Features
    vector<vector<int>> mat(3, vector<int>(3, 0)); // 2D vector 3x3
    mat[1][1] = 5;
    cout << "Matrix[1][1]=" << mat[1][1] << "\n";

    // Sorting & Reverse
    sort(v3.begin(), v3.end());   // ascending
    sort(v3.rbegin(), v3.rend()); // descending
    reverse(v3.begin(), v3.end());

    // Find & Count
    auto it = find(v3.begin(), v3.end(), 2);
    if (it != v3.end())
        cout << "Found 2\n";
    cout << "Count of 2: " << count(v3.begin(), v3.end(), 2) << "\n";

    // Erase-remove idiom
    v3.erase(remove(v3.begin(), v3.end(), 2), v3.end());

    // Unique elements
    v3 = {1, 1, 2, 2, 3, 3, 3};
    sort(v3.begin(), v3.end());
    v3.erase(unique(v3.begin(), v3.end()), v3.end()); // {1,2,3}

    // Convert array to vector
    int arr[] = {10, 20, 30};
    vector<int> v5(arr, arr + 3);

    // Final output
    cout << "v5: ";
    for (int x : v5)
        cout << x << " ";
    cout << "\n";
    cout << "v3 unique: ";
    for (int x : v3)
        cout << x << " ";
    cout << "\n";

    return 0;
}
