// Link do problema
// https : // codeforces.com/problemset/problem/2044/C
#include <bits/stdc++.h>

int main()
{

    int t;
    int m, a, b, c, m2;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d%d%d%d", &m, &a, &b, &c);

        m2 = m * 2;

        if (m >= a)
        {
            m2 -= a;
            if (c > (m2 - m))
            {
                c = c - (m2 - m);
                m2 -= (m2 - m);
            }
            else
            {
                m2 -= c;
                c = 0;
            }
        }
        else
        {
            m2 -= m;
        }
        if (m >= b)
        {
            m2 -= b;
        }
        else
        {
            m2 -= m;
        }

        if (m2 > 0 && c > 0)
        {
            m2 -= c;

            if (m2 < 0)
            {
                m2 -= m2;
            }
        }
        printf("%d\n", (m * 2) - m2);
    }
    return 0;
}