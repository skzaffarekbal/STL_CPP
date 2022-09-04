#include <bits/stdc++.h>
using namespace std;

int main()
{
    // lambda function
    auto sum = [](int x, int y)
    { return x + y; };
    // Always declare with auto keyword.

    cout << "Sum of 5 + 11 = " << sum(5, 11) << endl;

    vector<int> v = {1, -3, 5};

    cout << "All +VE : " << all_of(v.begin(), v.end(), [](int x)
                                   { return x > 0; })
         << endl;

    cout << "Anyone -VE : " << any_of(v.begin(), v.end(), [](int x)
                                      { return x < 0; })
         << endl;

    cout << "None of %2 : " << none_of(v.begin(), v.end(), [](int x)
                                       { return x % 2 == 0; })
         << endl;
}