#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 1, 6, 7, 6};
    int min = *min_element(v.begin() + 3, v.end());
    cout << "Min : " << min << endl;
    int max = *max_element(v.begin(), v.end());
    cout << "Max : " << max << endl;
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum : " << sum << endl;
    int ct = count(v.begin(), v.end(), 6);
    cout << "Count of 6 : " << ct << endl;
    auto it = find(v.begin(), v.end(), 10);
    if (it != v.end())
        cout << *it << endl;
    else
        cout << "Element not found " << endl;
    reverse(v.begin(), v.end());
    for (auto &i : v)
    {
        cout << i << '\t';
    }
    cout << endl;
}