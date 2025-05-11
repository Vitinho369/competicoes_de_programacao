#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v = {1, 2, 4, 4, 4, 6, 8};
    vector<int> a(10, 5);

    for (auto i : a)
    {
        cout << i << "\n";
    }

    auto lb = lower_bound(v.begin(), v.end(), 4);
    auto ub = upper_bound(v.begin(), v.end(), 4);

    cout << "lower_bound(4) esta no indice: " << lb - v.begin() << endl;
    cout << "upper_bound(4) esta no indice: " << ub - v.begin() << endl;

    set<int> s;

    s.insert(3);
    s.insert(2);
    s.insert(5);

    cout << s.count(3) << "\n";
    cout << s.count(4) << "\n";
    s.erase(3);
    s.insert(4);
    s.insert(4);
    s.erase(4);
    cout << s.count(3) << "\n";
    cout << s.count(4) << "\n";
    for (auto i : s)
    {
        cout << i << "\n";
    }

    multiset<int> s2;

    cout << "Multiset\n";
    s2.insert(5);
    s2.insert(5);
    s2.insert(5);
    cout << s2.count(5) << "\n";

    s2.erase(5);
    cout << s2.count(5) << "\n";
    s2.insert(5);
    s2.insert(5);
    s2.insert(5);
    s2.erase(s2.find(5));

    cout << s2.count(5) << "\n";
    cout << "Map\n";
    map<string, int> m;

    cout << m["aybabtu"] << "\n";

    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpisicord"] = 9;

    
}