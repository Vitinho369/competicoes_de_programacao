#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> fixed >> setprecision(2);
    cin >> a >> b >> c;
    double media = ((a * 2) + (b * 3) + (c * 5)) / 10;
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;
    return 0;
}