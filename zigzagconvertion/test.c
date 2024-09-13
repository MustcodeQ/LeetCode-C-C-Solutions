#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert(char *s, int numRow)
{
	if (numRow == 1)
	{
		return s;
	}

	int len = strlen(s);

	char *result = (char *)(malloc((len+1) * sizeof(char)));
	int index = 0;
	for (int row = 0; row < numRow; row++)
	{
		int step1 = (numRow - 1 - row) * 2;
		int step2 = (row *2);

		int pos = row;
		if (pos < len)
		{
			result[index++] = s[pos];
		}
		while(1)
		{
			pos += step1;
			if (pos >= len)
				break;
			if (step1)
				result[index++] = s[pos];

			pos += step2;
			if (pos >= len)
				break;
			if (step2)
				result[index++] = s[pos];

		}
	}
	result[index] = '\0';
	return result;
}

int main(void)
{
	char *s = "PAYPALISHIRING";
	int numRows = 3;
	printf(" [%s]\n", convert(s, numRows));
	return 0;

}

