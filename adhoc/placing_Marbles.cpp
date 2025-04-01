//Link do problema
//https://atcoder.jp/contests/abs/tasks/abc081_a
#include<bits/stdc++.h>

int main(){
    int s;

    scanf("%d", &s);
    int s1 = s%10;
    s /=10;
    int s2 = s%10;
    s /=10;
    int s3 = s;

    printf("%d\n", s1+s2+s3);
}
