#include <bits/stdc++.h>
using namespace std;

int main()
{
    string nome;

    getline(cin, nome);

    double n1, n2;

    cin >> n1 >> n2;
    cout << fixed << setprecision(2);
    double result = n1 + (n2 * 0.15);
    cout << "TOTAL = R$ " << result << endl;
    return 0;
}