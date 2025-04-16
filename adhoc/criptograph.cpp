#include <bits/stdc++.h>
using namespace std;

int main()
{
    // a = 97
    // A = 65
    // z = 122
    int n;
    cin >> n;
    string texto;
    getchar();
    for (int i = 0; i < n; i++)
    {
        getline(cin, texto);

        for (int j = 0; j < texto.size(); j++)
        {
            int value = (int)texto[j];
            if (value >= 65 && value <= 122)
            {
                value += 3;
                texto[j] = (char)value;
            }
        }

        reverse(texto.begin(), texto.end());

        for (int j = texto.size() / 2; j < texto.size(); j++)
        {
            int value = (int)texto[j];

            value -= 1;
            texto[j] = (char)value;
        }

        cout << texto << endl;
    }
    return 0;
}