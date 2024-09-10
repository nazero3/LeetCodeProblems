#include <vector>
#include <algorithm>

int solution(std::vector<int> &A)
{
    std::sort(A.begin(), A.end());

    for (int i = 1; i <= A.size(); i++)
    {
        if (A[i - 1] != i)
        {
            return i;
        }
    }
    return A.size() + 1;
}
