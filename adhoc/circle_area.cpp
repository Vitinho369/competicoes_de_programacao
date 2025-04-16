#include <bits/stdc++.h>
using namespace std;
int main()
{
    double raio;
    cin >> raio;

    double area = 3.14159 * pow(raio, 2);
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;
    return 0;
}