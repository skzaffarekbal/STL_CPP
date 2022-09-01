/*
TODO: https://www.geeksforgeeks.org/list-cpp-stl/

===========================(LIST)===========================
Lists are sequence containers that allow non-contiguous memory allocation. As compared to vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick. Normally, when we say a List, we talk about a doubly linked list. For implementing a singly linked list, we use a forward list.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(2);    // { 2 }
    ls.emplace_back(4); // ( 2 , 4 )
    ls.push_front(5);   // { 5 , 2 , 4 ) ;
    ls.emplace_front(); // { 2 , 4 ) ;

    for (auto it : ls)
    {
        cout << it << " ";
    }
    // rest functions same as vector
    // begin , end , rbegin , rend , clear , insert , size , swap
}