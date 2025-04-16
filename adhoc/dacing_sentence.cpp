#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while (getline(cin, s))
    {
        int cont = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                cont++;
                if (cont % 2 == 0)
                    s[i] = toupper(s[i]);
                else
                    s[i] = tollower(s[i]);
            }
        }

        cout << s;
    }
    return 0;
}