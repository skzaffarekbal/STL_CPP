/*
TODO: https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // unordered_set
    /* stored unique in unsorted order.
    lower_bound and upper_bound function
    does not works , rest all functions are same
    as above , it does not stores in any
    particular order it has a better complexity
    than set in most cases i.e O(1) because it using hash table, except some when collision happens*/
    unordered_set<string> us;
    us.insert(" abc "); // O(1)
    us.insert(" zsdf ");
    us.insert(" bcd ");
    us.insert(" abc ");

    for (auto &i : us)
    {
        cout << i << '\t';
    }
    cout << endl;

    auto it = us.find(" abc "); // O(1)
    if (it != us.end())
    {
        us.erase(it);
    }
    us.erase(" bcd ");
}