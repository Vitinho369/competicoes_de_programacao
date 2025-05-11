#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    vector<string> words(N);
    for (int i = 0; i < N; i++)
    {
        cin >> words[i];
    }

    sort(words.begin(), words.end());

    string prefix;
    for (int i = 0; i < Q; i++)
    {
        cin >> prefix;

        auto first = lower_bound(words.begin(), words.end(), prefix);

        string next_prefix = prefix;
        next_prefix.back()++;

        auto last = lower_bound(words.begin(), words.end(), next_prefix);

        cout << (last - first) << "\n";
    }

    return 0;
}