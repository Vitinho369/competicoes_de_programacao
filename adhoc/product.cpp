//Link do problema
//https://atcoder.jp/contests/abs/tasks/abc086_a
#include <bits/stdc++.h>

int main()
{
  int a, b, res;

  scanf("%d%d", &a, &b);
  res = a * b;
  printf(res%2 == 0? "Even" : "Odd");
}
