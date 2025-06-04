#include <bits/stdc++.h>
using namespace std;

void search(int y, int n, int *column, int *diag1, int *diag2, int &count)
{
    if (y == n)
    {
        count++;
        return;
    }
    for (int x = 0; x < n; x++)
    {
        if (column[x] || diag1[x + y] || diag2[x - y + n - 1])
            continue;
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        search(y + 1, n, column, diag1, diag2, count);
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
    }
}

int main()
{
    int n;
    cin >> n;

    int column[n] = {0};
    int diag1[2 * n - 1] = {0};
    int diag2[2 * n - 1] = {0};

    int count = 0;

    search(0, n, column, diag1, diag2, count);

    cout << "Numero de solucoes: " << count << endl;
    return 0;
}