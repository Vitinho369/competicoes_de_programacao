#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long fn = (n + a - 1) / a; // Equivalente a ceil(n/a) se as variaveis forem double
    long long fm = (m + a - 1) / a; // Equivalente a ceil(m/a) se as variaveis forem double

    long long result = fn * fm;

    cout << result << endl;

    return 0;
}