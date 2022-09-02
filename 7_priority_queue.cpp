/*
TODO: https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(5);                           // { 5 }
    pq.push(2);                           // { 5 , 2 )
    pq.push(8);                           // { 8 , 5 , 2 )
    pq.emplace(10);                       // ( 10 , 8 , 5 , 2 )
    cout << "top : " << pq.top() << endl; // prints 10
    pq.pop();                             // ( 8 , 5 , 2 }
    cout << "top : " << pq.top() << endl; // prints 8
    pq.push(12);
    pq.push(9);
    pq.push(10);
    while (!pq.empty())
    {
        cout << '\t' << pq.top();
        pq.pop();
    }
    cout << '\n';
    // size swap empty function same as others
    // Minimum Heap
    cout << "Minimum Heap" << endl;
    priority_queue<int, vector<int>, greater<int>> pqMin;
    pqMin.push(5);                           // { 5 }
    pqMin.push(2);                           // { 2 , 5 )
    pqMin.push(8);                           // ( 2 , 5 , 8 )
    pqMin.emplace(10);                       // ( 2 , 5 , 8 , 10 )
    cout << "top : " << pqMin.top() << endl; // prints 2
    while (!pqMin.empty())
    {
        cout << '\t' << pqMin.top();
        pqMin.pop();
    }
    cout << '\n';
}