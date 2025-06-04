#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string bit;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> bit;

        if (bit.find("+") != string::npos)
            x++;

        if (bit.find("-") != string::npos)
            x--;
    }

    cout << x << "\n";
}