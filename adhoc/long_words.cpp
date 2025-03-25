#include <bits/stdc++.h>

int main()
{
    int n;
    std::string word;

    scanf("%d", &n);

    getchar();
    for (int i = 0; i < n; i++)
    {
        std::getline(std::cin, word);

        if (word.size() > 10)
        {
            printf("%c%d%c\n", word[0], word.size() - 2, word[word.size() - 1]);
        }
        else
        {
            printf("%s\n", word.c_str());
        }
    }
    return 0;
}