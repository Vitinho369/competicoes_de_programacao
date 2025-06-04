#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cin >> text;
    bool find = false;
    int index = 0;
    vector<char> ch = {'h', 'e', 'l', 'l', 'o'};
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ch[index])
        {
            for (int j = i + 1; j < text.size() - 1; j++)
            {
                cout << text[j] << "\n";
                cout << ch[index] << "\n";
                cout << ch[index + 1] << "\n";

                if (text[j] != ch[index] && text[j] == ch[index + 1])
                {
                    index++;
                    find = true;
                    break;
                }
            }
        }
    }

    if (find)
        cout << "YES\n";
    else
        cout << "NO\n";
}