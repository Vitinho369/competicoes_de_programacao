#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    double n5, n6;

    cin >> n1 >> n2 >> n5;
    cin >> n3 >> n4 >> n6;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << (n2 * n5) + (n4 * n6) << endl;
    return 0;
}