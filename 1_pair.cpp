/*

TODO: https://www.geeksforgeeks.org/pair-in-cpp-stl/

===============================(PAIR)=================================
1. If not initialized, the first value of the pair gets automatically initialized.
2. make_pair(): This template function allows to create a value pair without writing the types explicitly.
3. swap(): This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of the same type.
e.g: pair1.swap(pair2) ;
4. In a pair we use operators(=, ==, !=, >=, <=)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Initialization of Pair
    pair<int, string> p1, p2;

    // Declaration of Pair
    p1 = make_pair(1, "Zaff");
    p2 = {2, "Mobo"};

    cout << p1.first << " " << p1.second << "\n";
    cout << p2.first << " " << p2.second << "\n";

    // Initialization & Declaration of Pair
    pair<int, string> p3(3, "Ali");
    cout << p3.first << " " << p3.second << "\n";

    // Copy by reference
    pair<int, string> &p4 = p3;
    p4.first = 12;
    cout << p4.first << " " << p4.second << "\n";

    // Nested Pair
    pair<int, pair<string, float>> p5 = {123, {"Ikigai", 125.50}};
    cout << p5.first << " " << p5.second.first << " " << p5.second.second << "\n";

    // Pair of Array
    int empId[] = {111, 222, 333};
    string empName[] = {"John", "Alex", "David"};
    pair<int, string> data[3];

    for (int i = 0; i < 3; i++)
    {
        data[i].first = empId[i];
        data[i].second = empName[i];
    }

    for (int i = 0; i < 3; i++)
        cout << data[i].first << " --> " << data[i].second << "\n";

    return 0;
}