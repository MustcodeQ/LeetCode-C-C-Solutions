#include <stdio.h>
#include <stdlib.h>

int mysqrt(int x)
{
	int left = 0;
	int right = x;
	int mid;
	int sqrt = 0;
	if (x == 1 || x == 0)
		return x;
	while (left <= right)
	{
		mid = left + (right - left) / 2;

		if (mid * mid == x)
			return mid;

		if (mid * mid > x)
			right = mid - 1;
		if (mid * mid < x)
		{
			left = mid + 1;
			sqrt = mid;
		}
	}
	return sqrt;
}

int main(void)
{
	//
	int x;
	printf("enter a  number: ");
	scanf("%d", &x);
	printf("sqrt of %d is [%d]\n", x, mysqrt(x));
	return 0;
}
