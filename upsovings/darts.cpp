#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MOD = 1e9 + 7;
const int MAXK = 1005;

ll modPow(ll a, ll b)
{
    ll res = 1;

    while (b > 0)
    {
        if (b & 1)
        {
            // se b for ímpar ( o bit menos significativo é 1)
            // verifica se o numero é par ou ímpar sem usar o operador %, é menos custoso
            res = res * a % MOD;
        }
        a = a * a % MOD;
        b = b >> 1; // também funciona: b >>= 1;
    }
    return res;
}

ll sumPowers(ll n, ll k)
{
    ll res = 0;
    for (ll i = 0; i <= n; ++i)
    {
        res = (res + modPow(i, k)) % MOD;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--) // Mesma coisa que  while(t > 0) e t--;
    {
        ll n;
        ll k;

        cin >> n >> k;
        cout << sumPowers(n, k) << "\n";
    }
}