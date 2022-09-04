/*
TODO: https://www.geeksforgeeks.org/multiset-in-cpp-stl/
TODO: https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Everything is same as set
    // only stores duplicate elements also
    multiset<int> ms;
    ms.insert(1); // ( 1 )
    ms.insert(1); // { 1 , 1 )
    ms.insert(1); // { 1 , 1 , 1 )

    for (auto &i : ms)
    {
        cout << i << '\t';
    }
    cout << endl;
    ms.erase(1); // all 1's erased
    int cnt = ms.count(1);
    // only a single one erased
    ms.erase(ms.find(1));
    // ms.erase(ms.find(1), ms.find(1) + 2);
    // rest all function same as set

    unordered_set<int> st;
    /* stored unique in unsorted order.
    lower_bound and upper_bound function
    does not works , rest all functions are same
    as above , it does not stores in any
    particular order it has a better complexity
    than set in most cases i.e O(1), except some when collision happens*/
}