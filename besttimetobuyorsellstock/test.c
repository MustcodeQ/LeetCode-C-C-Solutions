#include <stdio.h>
#include <limits.h> // For INT_MAX

int maxProfit(int *prices, int pricesSize)
{
    if (pricesSize < 2)
        return 0; // Not enough days to buy and sell

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main(void)
{
    int prices[] = {2, 1, 4};
    int size = sizeof(prices) / sizeof(prices[0]);

    printf("Maximum profit: %d\n", maxProfit(prices, size));
    return 0;
}
