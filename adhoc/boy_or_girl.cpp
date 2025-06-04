#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cin >> text;
    set<char> ch;

    for (auto c : text)
        ch.insert(c);

    if (ch.size() % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
}