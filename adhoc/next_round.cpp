#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;
    int a;
    int ant, cont = 0;
    vector<int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        p.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i] >= p[k - 1] && p[i] > 0)
            cont++;
    }

    cout << cont << "\n";
}