#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <algorithm>
#include <unordered_map>

int maxProfit(std::vector<int> &x)
{
    int min, max, index = 0;
    min = x.at(0);

    for (int i : x)
    {
        if (min > i)
            min = i;
    }
    for (int i : x)
    {
        if (min == i)
            break;
        ++index;
    }
    max = min;
    for (size_t i = x.at(index); i < x.size(); i++)
    {
        if (max < x.at(i))
            max = x.at(i);
    }

    return max - min;
}