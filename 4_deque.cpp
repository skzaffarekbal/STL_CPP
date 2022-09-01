/*
TODO: https://www.geeksforgeeks.org/deque-cpp-stl/

Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed. 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1); // { 1 }
    dq.emplace_back(2);
    dq.push_front(4);    // { 4 , 1 , 2 )
    dq.emplace_front(3); // ( 3 , 4 , 1 , 2 )
    cout << "Front : " << dq.front() << "\n";
    cout << "Back : " << dq.back() << "\n";

    for(auto it: dq)
    cout << it << " ";

    dq.pop_back();  // { 3 , 4 , 1 }
    dq.pop_front(); // { 4 , 1 )
    // rest functions same as vector
    // begin , end , rbegin , rend , clear , insert , size , swap
}
