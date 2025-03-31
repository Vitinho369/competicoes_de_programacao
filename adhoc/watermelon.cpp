// Link do problema
// https://codeforces.com/contest/4/problem/A
#include <bits/stdc++.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0 && n > 2)
        printf("YES");
    else
        printf("NO");
    return 0;
}