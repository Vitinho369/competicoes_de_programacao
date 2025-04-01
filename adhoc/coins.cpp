#include<bits/stdc++.h>

int main(){
    const int A = 500;
    const int B = 100;
    const int C = 50;
    int a,b,c, x, cont=0;

    scanf("%d%d%d%d", &a,&b,&c, &x);

    for(size_t i=0; i <= a; i++){
        if((i * A) == x)cont++;

        for(size_t j=0; j <= b; j++){

                if((j* B) == x)cont++;
                if(((i*A) + (j*B)) == x)cont++;

            for(size_t l=0; l <= c; l++){

                    if((l* C) == x)cont++;
                    if(((j*B) + (l*C)) == x)cont++;
                    if(((i*A) + (l*C)) == x)cont++;
                    if(((i*A) + (j*B) + (l*C)) == x)cont++;

                    printf("%d\n",(i * A));
                    printf("%d\n",(j* B));
                    printf("%d\n",(l* C) );
                    printf("%d\n",((i*A) + (j*B)));
                    printf("%d\n",((i*A) + (l*C)));
                    printf("%d\n",((i*A) + (j*B) + (l*C)) );
            }
        }
    }
    printf("%d", cont);
}
