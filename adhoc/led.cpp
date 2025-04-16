#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string texto;
    getchar();
    int leds;
    for (int i = 0; i < n; i++)
    {
        leds = 0;
        getline(cin, texto);
        for (int j = 0; j < texto.size(); j++)
        {
            if (texto[j] == '1')
                leds += 2;
            if (texto[j] == '2')
                leds += 5;
            if (texto[j] == '3')
                leds += 5;
            if (texto[j] == '4')
                leds += 4;
            if (texto[j] == '5')
                leds += 5;
            if (texto[j] == '6')
                leds += 6;
            if (texto[j] == '7')
                leds += 3;
            if (texto[j] == '8')
                leds += 7;
            if (texto[j] == '9')
                leds += 6;
            if (texto[j] == '0')
                leds += 6;
        }

        cout << leds << " leds\n";
    }
    return 0;
}