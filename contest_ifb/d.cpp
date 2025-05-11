#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t;

    getline(cin, t);

    for (int i = 0; i < t.size() - 2; i++)
    {
        cout << t.find("sad", i) << "\n";

        // cout << t.substr(i - 3, i) << " " << (t.substr(i - 3, i) == "el Sad" || t.substr(i - 3, i) == "EL SAD" || t.substr(i - 3, i) == "el sad") << endl;
        cout << (t.substr(i, i + 2)) << "\n";
        if ((t.substr(i, i + 2) == "sad" || t.substr(i, i + 2) == "Sad" || t.substr(i, i + 2) == "SAD"))
        {
            if (t[i + 1] == 'a')
                t.insert(i + 1, "a");
            else
                t.insert(i + 1, "A");
        }
    }

    cout << t;
}