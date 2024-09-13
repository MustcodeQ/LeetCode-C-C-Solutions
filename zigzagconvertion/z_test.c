#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert(char *s, int rowNum)
{
	int len = strlen(s);

	if (rowNum == 1)
		return s;

	char *result = (char *)(malloc(sizeof(char) * (len+1)));
	int index = 0;

	for (int row = 0; row < rowNum; row++)
	{
		int step1 = 2 * (rowNum - 1 - row);
		int step2 = 2 * row;

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
	char Str[] = "PAYPALISHIRING";
	int rows = 4;
	printf("exe!\n");
	printf(" [%s]\n", convert(Str, rows));
	return 0;
}
