#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    vector<int> perm;
    for (int i = 1; i <= n; i++)
    {
        perm.push_back(i);
    }

    bool flag;
    do
    {

        flag = false;
        for (int i = 1; i < n; i++)
        {

            if (abs((perm[i] - perm[i - 1])) > 1)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
    } while (!flag && next_permutation(perm.begin(), perm.end()));

    if (flag)
    {
        for (int i = 0; i < n; i++)
        {
            cout << perm[i] << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "NO SOLUTION\n";
    }
}