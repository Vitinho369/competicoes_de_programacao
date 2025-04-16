#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> fixed >> setprecision(2);
    cin >> a >> b;
    double media = ((a * 3.5) + (b * 7.5)) / 11;
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;
    return 0;
}