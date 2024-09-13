#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int myAtoi(char *s)
{
    int i = 0;
    int number = 0;
    while (isspace(s[i]))
        i++;

    int sign = 1;
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (isdigit(s[i]))
    {
        int digit = s[i] - '0';

        // Check for overflow
        if (number > (INT_MAX - digit) / 10)
        {
            return sign == 1 ? INT_MAX : INT_MIN;
        }

        number = number * 10 + digit;
        i++;
    }

    return sign * number;
}

int main(void)
{
    //
}