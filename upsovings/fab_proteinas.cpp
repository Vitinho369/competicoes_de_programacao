#include <bits/stdc++.h>
using namespace std;

string dna;

bool compLower(int idx, const string &s)
{
    return dna.compare(idx, s.size(), s) < 0;
}

bool compUpper(const string &s, int idx)
{
    return s.compare(dna.substr(idx, s.size())) < 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    cin >> dna;

    string proteina;
    cin >> proteina;

    vector<int> suffix_array(N);
    iota(suffix_array.begin(), suffix_array.end(), 0);

    sort(suffix_array.begin(), suffix_array.end(), [](int a, int b)
         { return dna.substr(a) < dna.substr(b); });

    int Q;
    cin >> Q;

    while (Q--)
    {
        int A, B;
        cin >> A >> B;
        string query = proteina.substr(A - 1, B - A + 1);

        auto lower = lower_bound(suffix_array.begin(), suffix_array.end(), query, compLower);
        auto upper = upper_bound(suffix_array.begin(), suffix_array.end(), query, compUpper);

        cout << (upper - lower) << "\n";
    }

    return 0;
}
