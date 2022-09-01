/*
TODO: https://www.geeksforgeeks.org/stack-in-cpp-stl/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1);                             // { 1 }
    st.push(2);                             // ( 2 , 1 )
    st.push(3);                             // { 3 , 2 , 1 )
    st.push(3);                             // ( 3 , 3 , 2 , 1 )
    st.emplace(5);                          // ( 5 , 3 , 3 , 2 , 1 )
    cout << "Top : " << st.top() << endl;   // prints 5 " ** st [ 2 ] is invalid ***
    st.pop();                               // st looks like ( 3 ,
    cout << "Top : " << st.top() << endl;   // 3
    cout << "Size : " << st.size() << endl; // 4
    cout << "isEmpty : " << st.empty() << endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    stack<int> st1, st2;
    st1.swap(st2);
    //   ( 3 , 2 , 1 )
}