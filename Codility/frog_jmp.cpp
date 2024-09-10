int solution(int x, int y, int d)
{
    int diff = y - x;
    int jumps = (diff + d - 1) / d;
    return jumps;
}
