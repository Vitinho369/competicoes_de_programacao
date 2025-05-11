#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int p;
    string s;
    vector<pair<int, string>> ps;
    vector<int> sums;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        cin >> p;

        ps.push_back({p, s});
    }

    sort(ps.begin(), ps.end());
    int size = ps.size();

    for (int i = 0; i < size / 2; ++i)
    {
        sums.push_back(ps[i].first + ps[size - i - 1].first);
    }

    sort(sums.begin(), sums.end());

    int sumMin = sums[sums.size() - 1] - sums[0];
    cout << sumMin << "\n";
    for (int i = 0; i < size / 2; ++i)
    {
        cout << ps[i].second << " " << ps[i].first << " " << ps[size - i - 1].second << " " << ps[size - i - 1].first << "\n";
    }
}