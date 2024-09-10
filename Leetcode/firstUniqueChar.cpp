#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <algorithm>
#include <unordered_map>

int firstUniqChar(std::string s)
{

    if (s.empty())
        return -1;
    std::unordered_map<char, int> x;
    for (char c : s)
        x[c]++;
    for (int i = 0; i < s.size(); i++)
    {
        if (x[s[i]] == 1)
            return i;
    }
    return -1;
}