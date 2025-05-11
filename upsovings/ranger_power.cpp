#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

ll modpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N, K;
    cin >> N >> K;

    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;

    ll total = 0;
    ll prefix_sum = 0;
    ll sum_pows = 0;

    for (int i = 0; i < N; ++i)
    {
        prefix_sum = (prefix_sum + A[i]) % MOD;
        ll term = modpow(prefix_sum, K);
        total = (total + term) % MOD;
    }

    cout << total << "\n";
    return 0;
}