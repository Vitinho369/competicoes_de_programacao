#include <bits/stdc++.h>

using namespace std;

vector<int> tree;
int sum(int k)
{
    int s = 0;
    while (k >= 1)
    {
        s += tree[k];
        k -= k & -k;
    }
    return s;
}

void add(int k, int x)
{
    while (k <= tree.size())
    {
        tree[k] += x;
        k += k & -k;
    }
}

int main()
{
    vector<int> array;
    // = {1, 3, 4, 8, 6, 1, 4, 2};
    bool continuar, isAdd;
    int valor;
    do
    {
        cout << "\nDigite um valor para adicionar no array: ";
        cin >> valor;
        array.push_back(valor);
        cout << "\nDeseja adicionar mais elementos no array? 1 - sim, 0 - nao";
        cin >> continuar;
    } while (continuar);
    tree.push_back(0);
    int sumT, j, is2Pot;
    for (int i = 0; i < array.size(); i++)
    {
        sumT = array[i];

        if (((i + 1) & 1) == 0) // olho se o indice eh divisivel por 2, vendo se o msb eh 0
        {
            is2Pot = i + 1;
            if ((is2Pot & (is2Pot - 1)) != 0) // olho se o número é uma potencia de 2
            {
                sumT += array[i - 1];
            }
            else
            {
                j = i;
                sumT += array[i - 1];
                while (j > 1)
                {
                    j -= j & -j;
                    sumT += tree[j];
                }
            }
        }
        tree.push_back(sumT);
    }

    for (auto t : tree)
    {
        cout << t << " ";
    }
    int x, k;
    do
    {
        cout << "\nDeseja somar um intervalo ou aumentar o valor do array? 1 - add, 0 - sum\n";
        cin >> isAdd;

        if (isAdd)
        {
            cout << "\nDigite o indice k que deseja alterar e o valor x que deseja somar:";
            cin >> k >> x;
            add(k, x);

            for (auto t : tree)
            {
                cout << t << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "\nDigite o intervalo [1,k] que deseja somar:\n1, ";
            cin >> k;
            cout << sum(k);
        }
        cout << "\nDeseja continuar? 1 - sim, 0 - nao\n";
        cin >> continuar;
    } while (continuar);
}