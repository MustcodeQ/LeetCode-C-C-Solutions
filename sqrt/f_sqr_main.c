#include <stdio.h>

// Function to compute the integer square root of x
int _sqrt(int x)
{
    // Handle the special cases for 0 and 1
    if (x == 0 || x == 1)
    {
        return x;
    }

    int left = 0;
    int right = x;
    long long int mid;
    int sqrt = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        // Check if mid is the square root of x
        if (mid * mid == x)
        {
            return mid;
        }
        // If mid squared is less than x, we need to search
        // in the right half
        if (mid * mid < x)
        {
            left = mid + 1;
            sqrt = mid; // Update the result to mid since
            // it could be a valid result
        }
        else
        {
            // If mid squared is greater than x, search
            // in the left half
            right = mid - 1;
        }
    }
    // Return the largest integer less than or
    // equal to the square root of x
    return sqrt;
}

int main(void)
{
    int x1 = 4;
    int x2 = 8;
    printf("The integer square root of %d is %d\n", x1, _sqrt(x1));
    printf("The integer square root of %d is %d\n", x2, _sqrt(x2));
    return 0;
}
