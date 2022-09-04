/*
TODO: https://www.geeksforgeeks.org/set-in-cpp-stl/
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    st.insert(1);  // { 1 }
    st.emplace(2); // { 1 , 2 }
    st.insert(2);  // { 1 , 2 }
    st.insert(4);  // { 1 , 2 , 4 )
    st.insert(3);  // { 1 , 2 , 3 , 4 )
    st.insert(5);  // { 1 , 2 , 3 , 4, 5 )
    st.insert(10); // { 1 , 2 , 3 , 4, 5, 10 )
    st.insert(7);  // { 1 , 2 , 3 , 4, 5, 7, 10 )
    st.insert(8);  // { 1 , 2 , 3 , 4, 5, 7, 8, 10 )
    for (auto &i : st)
    {
        cout << i << '\t';
    }
    cout << endl;
    // Functionality of insert in vector
    // can be used also , that only increases
    // efficiency
    // begin ( ) , end ( ) , rbegin ( ) , rend ( ) , size ( ) ,
    // empty ( ) and swap ( ) are same as those of above
    auto it10 = st.find(10);
    cout << "Find 10 : " << *it10 << endl; // print 10
    auto it6 = st.find(6);
    cout << "Find 6 : " << *it6 << endl; // It will return set end.
    cout << "Size : " << st.size() << endl;
    cout << "End : " << *(st.end()) << endl;

    st.erase(5); // erases 5 // takes logarithmic time
    int cnt = st.count(1);
    cout << "Count of 1 : " << cnt << endl;

    auto it = st.find(10);
    st.erase(it); // it takes constant time
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // It erase [ first , last )
}