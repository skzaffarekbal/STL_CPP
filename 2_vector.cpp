/*

TODO: https://www.geeksforgeeks.org/vector-in-cpp-stl/

====================================(VECTOR)=================================
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted.

1. begin() – Returns an iterator pointing to the first element in the vector
2. end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
3. rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
4. rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v; // Initialization
    // Push data in a vector in two way.
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3); // Adding at last index
    v.pop_back();   // Removing from last index

    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // Copy one vector to another
    vector<int> v1(v);
    v1 = v;

    // Passing reference(Only copy the pointer)
    vector<int> &v2 = v;
    v.push_back(3);

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n";

    // Iterator (Just a pointer location) -------------------->
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    it = it + 1;
    cout << *(it) << "\n";

    // We can assign iterator position in different location.
    // vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    // Assign type
    vector<int> v100(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v0(5);        // {0, 0, 0, 0, 0}

    for (auto it = v100.begin(); it != v100.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << '\n';

    // Pair of vector(Nested)
    vector<pair<int, string>>
        vec = {{1, "Zaff"}, {2, "Mobo"}};
    vec.push_back({3, "Ali"});
    vec.emplace_back(4, "Abhi");

    for (auto it : vec)
    {
        cout << it.first << "--->" << it.second << "\n";
    }

    return 0;
}