#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, j;
    cin >> h >> j;
    string dna, prot;
    getchar();
    getline(cin, dna);
    getline(cin, prot);

    int p;
    cin >> p;
    int a, b;
    int tam;
    string new_prot, dna_copy;
    int cont;
    for (int i = 0; i < p; i++)
    {
        dna_copy = dna;
        cont = 0;
        cin >> a >> b;
        if (a > b)
            tam = (a - b) + 1;
        else
            tam = (b - a) + 1;

        new_prot = prot.substr(a - 1, tam);

        int busca = dna.find(new_prot);
        for (int i = 0; i < dna_copy.size(); i++)
        {
            sort(dna_copy.begin() + i, dna_copy.begin() + i + tam);
            cout << dna_copy << "\n";
        }
    }

    return 0;
}