#include <stdio.h>
#include <stdlib.h>

int _sqrt(int x)
{
    if (x == 0 || x == 1)
        return x;

    int left = 0;
    int right = x;
    int mid;
    int sqrt = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (mid * mid == x)
        {
            return mid;
        }

        if (mid * mid < x)
        {
            left = mid + 1;
            sqrt = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    return sqrt;
}

int main(void)
{
    int x = 25;
    printf("exe\n");
    printf("[%d]\n", _sqrt(x));
    return 0;
}
