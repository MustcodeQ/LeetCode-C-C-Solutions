#include <stdio.h>
#include <stdlib.h>


int f_sqrt(int x)
{
	int left = 0;
	int right = x;
	long long int mid;
	int sqrt = 0;

	if (x == 1 || x == 0)
		return x;
	while (left <= right)
	{
		mid = left + (right - left)/ 2;

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
	int x1 = 25;
	int x2 = 36;
	printf("exe!\n");
	printf(" sqrt-r[%d]->[%d]\nsqrt-r[%d]->[%d]\n", x1,f_sqrt(x1), x2, f_sqrt(x2));
	return 0;
}

