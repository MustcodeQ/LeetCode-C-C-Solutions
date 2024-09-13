#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int maxprofit(int *prices, int size)
{
	if (size < 2)
		return 0;

	int minprice = INT_MAX;
	int maxprofit = 0;

	for (int i = 0; i < size; i++)
	{
		if (prices[i] < minprice)
			minprice = prices[i];
		else if (prices[i] - minprice > maxprofit)
			maxprofit = prices[i] - minprice;
	}
	return maxprofit;
}

int main(void)
{
	//
	//
	int prices[] = {4, 6, 8, 12, 22, 30};
	int size = sizeof(prices) / sizeof(prices[0]);
	printf("exe!\n");
	for (int i = 0; i < size; i++)
	{
		printf("[%d] ", prices[i]);
	}
	printf("\nprofit [%d]\n", maxprofit(prices, size));
	return 0;
}
