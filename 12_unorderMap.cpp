/*
TODO: https://www.geeksforgeeks.org/unordered_map-find-in-c-stl/
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. inbuilt implementation(Using Hash Tables)
    // 2. Time complexity 0(1)
    // 3. valid keys datatype(Pair not acceptable)
    unordered_map<int, string> m;
    m[1] = " abc "; // O(1)
    m[5] = " cdc ";
    m[3] = " acd ";
    m[6] = " a ";
    m[5] = " cde ";
    for (auto &pr : m) // Access Time complexity O(1)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    auto it = m.find(7); // O(1)
    if (it != m.end())
        m.erase(it); // O(1)
    // m.clear ( ) ;
}