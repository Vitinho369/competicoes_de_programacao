#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;

    vector<int> v1;
    set<int> v2;

    cin >> n1 >> n2;
    int v;
    for (int i = 0; i < n1; i++)
    {
        cin >> v;

        if (v2.count(v) < 1)
            v1.push_back(v);

        v2.insert(v);
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> v;
        if (v2.count(v) < 1)
            v1.push_back(v);

        v2.insert(v);
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}