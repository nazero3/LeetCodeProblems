#include <vector>
#include <algorithm>

int solution(std::vector<int> &A)
{
    int N = A.size();
    std::vector<long long> leftBoundaries(N);
    std::vector<long long> rightBoundaries(N);

    for (int J = 0; J < N; J++)
    {
        leftBoundaries[J] = J - static_cast<long long>(A[J]);
        rightBoundaries[J] = J + static_cast<long long>(A[J]);
    }

    std::sort(leftBoundaries.begin(), leftBoundaries.end());
    std::sort(rightBoundaries.begin(), rightBoundaries.end());

    int intersections = 0;
    int openDiscs = 0;
    int rightIndex = 0;

    for (int leftIndex = 0; leftIndex < N; leftIndex++)
    {
        while (rightIndex < N && rightBoundaries[rightIndex] < leftBoundaries[leftIndex])
        {
            openDiscs--;
            rightIndex++;
        }

        intersections += openDiscs;

        if (intersections > 10000000)
        {
            return -1;
        }

        openDiscs++;
    }

    return intersections;
}
