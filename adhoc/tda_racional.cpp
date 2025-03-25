// Link do problema
// https : // judge.beecrowd.com/pt/problems/view/1022
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int n1, d1, n2, d2;
    char op1, op2, op3;
    int resN, resD;

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &n1);
        getchar();
        scanf("%c", &op1);
        scanf("%d", &d1);
        getchar();
        scanf("%c", &op2);
        scanf("%d", &n2);
        getchar();
        scanf("%c", &op3);
        scanf("%d", &d2);

        switch (op2)
        {
        case '+':
            resN = (n1 * d2 + n2 * d1);
            resD = (d1 * d2);
            break;
        case '-':
            resN = (n1 * d2 - n2 * d1);
            resD = (d1 * d2);
            break;
        case '*':
            resN = (n1 * n2);
            resD = (d1 * d2);
            break;
        case '/':
            resN = (n1 * d2);
            resD = (n2 * d1);
            break;
        }

        int simplyN = resN, simplyD = resD;
        for (int j = 2; j < (resN > resD ? resN : resD); j++)
        {
            while (simplyN % j == 0 && simplyD % j == 0)
            {
                simplyD /= j;
                simplyN /= j;
            }
        }
        printf("%d/%d = %d/%d\n", resN, resD, simplyN, simplyD);
    }

    return 0;
}