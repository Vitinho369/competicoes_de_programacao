#include <bits/stdc++.h>
using namespace std;

int main()
{
    double raio;

    cin >> raio;
    double area = (4.0 / 3) * 3.14159 * pow(raio, 3);
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << area << endl;
    return 0;
}