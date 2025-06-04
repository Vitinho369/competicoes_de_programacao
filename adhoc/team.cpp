#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int cont = 0, cont1;
    int t;
    for (int i = 0; i < n; i++)
    {
        cont1 = 0;
        for (int c = 0; c < 3; c++)
        {
            cin >> t;
            if (t == 1)
                cont1++;
        }

        if (cont1 > 1)
            cont++;
    }

    cout << cont << "\n";
}