//Link do problema
//https://atcoder.jp/contests/abs/tasks/practice_1
#include <bits/stdc++.h>

int main()
{
  int a, b,c, res;
  std::string s;

  scanf("%d%d%d", &a, &b, &c);
  getchar();
  std::getline(std::cin, s);
  res = a+b+c;
  printf("%d %s\n", res, s.c_str());
}
