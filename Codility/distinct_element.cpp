#include <vector>
#include <algorithm>

int solution(std::vector<int> &A)
{
    std::vector<bool> res(A.size(), true);

    for (int i = 0; i < A.size() - 1; i++)
    {
        for (int j = i + 1; j < A.size(); j++)
        {
            if (A.at(i) == A.at(j))
            {
                res[i] = false;
                res[j] = false;
                break;
            }
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        if (res[i])
            return A.at(i);
    }
    return -1; // Return some default value if nothing found
}
