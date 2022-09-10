/*
TODO: https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/

-> An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized.
-> All operations takes constant time O(1) on an average which can go up to linear time O(n) in worst case which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation. 
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