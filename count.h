#include <iostream>
#include <vector>

void count(std::vector<int **> p)
{
    std::vector<int *> dir(1, *p[0]);
    std::vector<int> ocurrences(1, 0);
    int index;

    for (int i = 0; p[i] != NULL; i++)
    {
        auto it = find(dir.begin(), dir.end(), *p[i]);
        if (it != dir.end())
        {
            index = distance(dir.begin(), it);
            ocurrences[index]++;
        }
        else
        {
            dir.push_back(*p[i]);
            ocurrences.push_back(1);
        }
    }
    for (int i = 0; i < dir.size(); i++)
    {
        std::cout << *dir[i] << " " << ocurrences[i] << std::endl;
    }
}
