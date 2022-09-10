/*
TODO: https://www.geeksforgeeks.org/unordered_map-find-in-c-stl/

-> An unordered_set is implemented using a HASH TABLE where keys are hashed into indices of a hash table so that the insertion is always randomized.
-> Time complexity for operations is O(1)
-> In the worst case, its time complexity can go from O(1) to O(n2), especially for big prime numbers.
-> unordered_map is used to store elements as key,value pairs in non-sorted order.
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