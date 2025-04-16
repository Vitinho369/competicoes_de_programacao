#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int maiorab = (a + b + abs(a - b)) / 2;
    int maior = (maiorab + c + abs(maiorab - c)) / 2;

    cout << maior << " eh o maior\n";
    return 0;
}