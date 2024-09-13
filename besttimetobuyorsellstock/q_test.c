#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int stock(int *prices, int size)
{
	int min_price = INT_MAX;
	int max_profit = 0;
	for (int i = 0; i < size; i++)
	{
		if (prices[i] < min_price)
		{
			min_price = prices[i];
		}
		else if (prices[i] - min_price > max_profit)
		{
			max_profit = prices[i] - min_price;
		}
	}
	return max_profit;
}

int main(void)
{
	int prices[] = {2, 4, 6, 11, 14, 20};
	int size = sizeof(prices) / sizeof(prices[0]);
	printf("exe!\n");
	for (int i = 0; i < size;  i++)
	{
		printf(" [%d] ", prices[i]);
	}
	printf("\nmax-profit [%d]\n", stock(prices, size));
	return 0;
}

