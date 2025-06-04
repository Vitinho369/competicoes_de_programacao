#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    int indexI, indexJ;
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cin >> m;
            if (m)
            {
                indexI = i;
                indexJ = j;
            }
        }
    }

    int l = abs(indexI - 2);
    int c = abs(indexJ - 2);
    cout << l + c << "\n";
}