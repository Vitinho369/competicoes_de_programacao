#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, B;
    cin >> b >> B;
    int cont = 0;
    while (b <= B)
    {
        b *= 3;
        B *= 2;
        cont++;
    }

    cout << cont << "\n";
    return 0;
}