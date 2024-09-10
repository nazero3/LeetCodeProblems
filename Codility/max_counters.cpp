#include <vector>
#include <algorithm>

std::vector<int> solution(int N, std::vector<int> &A)
{
    std::vector<int> counters(N, 0);
    int max = 0;
    int current_max = 0;

    for (int k : A)
    {
        if (k <= N)
        {
            counters[k - 1] = std::max(counters[k - 1], max);
            counters[k - 1]++;
            current_max = std::max(current_max, counters[k - 1]);
        }
        else
        {
            max = current_max;
        }
    }

    for (int &counter : counters)
    {
        counter = std::max(counter, max);
    }

    return counters;
}
