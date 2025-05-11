// Link do problema
// https://judge.beecrowd.com/pt/problems/view/1026
#include <stdio.h>
#include <math.h>

int main()
{
    while (true)
    {
        unsigned int numA, numB;
        unsigned int numResult = 0;
        int sucess = scanf("%u %u", &numA, &numB);
        if (sucess == EOF)
            break;

        for (int i = 0; i < 32; i++)
        {
            numResult += (pow(2, i) * ((!(numA % 2) && (numB % 2)) || ((numA % 2) && !(numB % 2))));
            numA /= 2;
            numB /= 2;
        }

        printf("%u\n", numResult);
    }
    return 0;
}