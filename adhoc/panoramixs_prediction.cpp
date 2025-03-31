// Link do problema
// https : // codeforces.com/contest/80/problem/A
#include <bits/stdc++.h>

int main()
{
    int n, m;
    int cont = 0;
    int imparProx = 0;
    scanf("%d%d", &n, &m);

    for (int i = n + 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cont++;
            }
        }

        if (cont == 2)
        {
            imparProx = i;
        }

        if (imparProx != 0)
            break;
        cont = 0;
    }

    if (imparProx == m)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}