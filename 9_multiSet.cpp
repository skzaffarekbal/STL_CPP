/*
TODO: https://www.geeksforgeeks.org/multiset-in-cpp-stl/
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Everything is same as set
    // only stores duplicate elements also
    multiset<string> s;
    s.insert(" abc "); // o ( log ( n ) )
    s.insert(" zsdf ");
    s.insert(" bcd ");
    s.insert(" abc ");
    s.insert(" abc ");

    for (auto &i : s)
    {
        cout << i << '\t';
    }
    cout << endl;

    int cnt = s.count("abc");
    cout << "'abc' Count : " << cnt << endl;

    auto it = s.find(" abc "); // o ( log ( n ) )
    if (it != s.end())
    {
        s.erase(it); // erase 1st 'abc'.
    }
    s.erase("abc"); // all "abc" erased
    // rest all function same as set
}