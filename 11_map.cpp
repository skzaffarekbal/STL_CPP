/*
TODO: https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = " abc "; // O(logN)
    m[5] = " cdc ";
    m[3] = " acd ";
    m[3] = " xyz "; // Just update the key 3 value
    m.insert({4, " afg "});
    for (auto &pr : m) // Access Time complexity O(NlogN)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    auto it = m.find(3); // O(logN)
    if (it == m.end())
    {
        cout << "No Value" << endl;
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
        m.erase(it); // to remove from map O(logN)
    }

    m[3] = " acd ";
    m.erase(3);
}