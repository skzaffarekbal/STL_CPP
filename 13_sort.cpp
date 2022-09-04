#include <bits/stdc++.h>
using namespace std;

int compareArr(int a, int b)
{
    return a > b; // Always return what you want.
}

int compareVec(pair<int, string> a, pair<int, string> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    // Array
    int a[] = {4, 9, 3, 0, 6, 1, 8, 2, 5, 7}, n = 10;
    sort(a, a + 10, compareArr); // sort(start_pointer, end_pointer, custom_compare_func)
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // Vector
    vector<pair<int, string>> vec = {{11, "Zaff"}, {34, "Mobo"}};
    vec.push_back({11, "Ali"});
    vec.emplace_back(4, "Abhi");

    // sort(a.begin(), a.end(), custom_compare_func) --> to sort a vector
    sort(vec.begin(), vec.end(), compareVec);

    for (auto it : vec)
    {
        cout << it.first << "--->" << it.second << "\n";
    }
}