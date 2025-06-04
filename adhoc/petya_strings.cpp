#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;

    cin >> a;
    cin >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int resp = 0;
    for (int i = 0; i < a.size(); i++)
    {

        if (a[i] > b[i])
        {
            resp = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            resp = -1;
            break;
        }
    }
    cout << resp << "\n";
}