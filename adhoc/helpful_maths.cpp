#include <bits/stdc++.h>
using namespace std;

int main()
{
    string op;

    cin >> op;
    vector<char> opNums;
    for (int i = 0; i < op.size(); i += 2)
        opNums.push_back(op[i]);

    sort(opNums.begin(), opNums.end());

    for (int i = 0; i < opNums.size(); i++)
    {
        cout << opNums[i];
        if (i < opNums.size() - 1)
            cout << "+";
    }
    cout << "\n";
}