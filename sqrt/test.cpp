#include <iostream>

using namespace std;

class Solution
{
public:
	int mySqrt(int x)
	{
		int left = 0;
		int right = x;
		int mid;
		int sqrt = 0;

		if (x == 0 || x == 1)
			return x;

		while (left <= right)
		{
			mid = left + (right - left) / 2;

			if (mid * mid == x)
				return mid;

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
};

int main()
{
	int x = 25;
	Solution sol;
	int res = sol.mySqrt(x);

	std::cout << "The square root of " << x << " is " << res << std::endl;

	return 0;
}