#include <bits/stdc++.h>

int main()
{
    std::vector<int> m;
    std::vector<int> n;
    std::vector<std::vector<int>> nums;
    std::vector<std::vector<int>> mods;
    std::vector<int> mod;

    int numM = 1, numN = 1, numLidos;
    int cont = 0;
    while (numM != 0 && numN != 0)
    {
        scanf("%d", &numM);
        scanf("%d", &numN);
        m.push_back(numM);
        n.push_back(numN);
        nums.push_back({});
        mods.push_back({});

        for (size_t i = 1; i <= m.back(); i++)
        {
            scanf("%d", &numLidos);
            nums.at(cont)
                .push_back(numLidos);

            mods.at(cont)
                .push_back(nums.at(cont).back() % numN);
        }
        mod = mods.at(cont);

        for (size_t i = 0; i < mod.size(); i++)
        {
            printf("mod = %d ", mod.at(i));
        }
        printf("\n");
        std::sort(nums.at(cont).begin(), nums.at(cont).end(),
                  [&mod](size_t a, size_t b) // Função lambda em c++
                  {
                      return mod[a] < mod[b];
                  });

        mods.at(cont) = mod;
        cont++;
    }
    printf("////////////ORDENADOS//////////////\n");
    for (size_t i = 0; i < m.size(); i++)
    {
        printf("%d %d\n", m.at(i), n.at(i));

        for (size_t j = 0; j < nums.at(i).size(); j++)
        {
            printf("%d\n", nums.at(i).at(j));
        }
    }
}