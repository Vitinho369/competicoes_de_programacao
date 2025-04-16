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

            // mods.at(cont)
            //     .push_back(nums.at(cont).back() % numN);

            // printf("%d %d\n", nums.at(cont).back(), nums.at(cont).back() % numN);
        }

        // for (size_t i = 0; i < mods.at(cont).size(); i++)
        // {
        //     printf("mod = %d \n", mods.at(cont).at(i));
        // }
        // printf("\n");

        // std::sort(mods.at(cont).begin(), mods.at(cont).end());
        // mod = mods.at(cont);
        for (size_t i = 0; i < nums.at(cont).size(); i++)
        {
            for (size_t j = 0; j < nums.at(cont).size(); j++)
            {
                if ((nums.at(cont).at(i) % numN) < (nums.at(cont).at(j) % numN))
                {
                    std::swap(nums.at(cont).at(i), nums.at(cont).at(j));
                }
            }
        }
        cont = 0;
        for (size_t j = 1; j < nums.at(cont).size(); j++)
        {
            if ((nums.at(cont).at(j - 1) % numN) == (nums.at(cont).at(j) % numN))
            {
                mods.at(cont).push_back(nums.at(cont).at(j - 1));
            }
            else
            {
                cont++;
                mods.push_back({});
                mods.at(cont).push_back(nums.at(cont).at(j - 1));
            }
        }

        for (size_t j = 0; j < mods.size(); j++)
        {
            for (size_t i = 0; i < mods.at(j).size(); i++)
            {
                for (size_t l = 0; l < mods.at(j).size(); l++)
                {
                    if (mods.at(j).at(l) % 2 == 0 && (mods.at(j).at(i) % 2 == 1))
                    {
                        std::swap(nums.at(cont).at(i), nums.at(cont).at(j));
                    }
                    else if (mods.at(j).at(l) % 2 == 1 && (mods.at(j).at(i) % 2 == 1))
                    {
                        if (mods.at(j).at(l) > mods.at(j).at(i))
                        {
                            std::swap(nums.at(cont).at(i), nums.at(cont).at(j));
                        }
                        else
                        {
                            std::swap(nums.at(cont).at(j), nums.at(cont).at(i));
                        }
                    }
                    else if (mods.at(j).at(l) % 2 == 0 && (mods.at(j).at(i) % 2 == 0))
                    {
                        if (mods.at(j).at(l) < mods.at(j).at(i))
                        {
                            std::swap(nums.at(cont).at(i), nums.at(cont).at(j));
                        }
                        else
                        {
                            std::swap(nums.at(cont).at(j), nums.at(cont).at(i));
                        }
                    }
                }
            }
        }

        // printf("\npos ordenado \n");
        // for (size_t i = 0; i < mod.size(); i++)
        // {
        //     printf("mod = %d num = %d\n", mod.at(i), nums.at(cont).at(i));
        // }
        printf("\n");
        // mods.at(cont) = mod;
    }
    printf("////////////Modulos//////////////\n");
    // for (size_t i = 0; i < m.size(); i++)
    // {
    //     printf("%d %d\n", m.at(i), n.at(i));

    //     for (size_t j = 0; j < nums.at(i).size(); j++)
    //     {
    //         printf("%d\n", nums.at(i).at(j));
    //     }
    // }
    for (size_t j = 0; j < mods.size(); j++)
    {
        for (size_t i = 0; i < mods.at(j).size(); i++)
        {
            printf("%d\n", mods.at(j).at(i));
        }
    }
}