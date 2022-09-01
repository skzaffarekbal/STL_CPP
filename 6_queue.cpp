/*
TODO: https://www.geeksforgeeks.org/queue-cpp-stl/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4); // { 1 , 2 , 4 )
    q.back() += 5;
    cout << "Back : " << q.back() << endl; // prints 9
    // Q is { 1 , 2 , 9 }
    cout << "Front : " << q.front() << endl; // prints 1
    q.pop();                                 // { 2 , 9 )
    q.push(8);
    q.push(10);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    // size swap empty same as stack
}