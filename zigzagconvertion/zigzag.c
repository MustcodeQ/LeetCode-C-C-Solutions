#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    if (numRows == 1) return s;

    int len = strlen(s);
    char *result = (char *)malloc((len + 1) * sizeof(char));
    int index = 0;
    
    for (int row = 0; row < numRows; row++) {
        int step1 = 2 * (numRows - 1 - row);
        int step2 = 2 * row;
        int pos = row;
        
        if (pos < len) {
            result[index++] = s[pos];
        }
        
        while (1) {
            pos += step1;
            if (pos >= len) break;
            if (step1) {
                result[index++] = s[pos];
            }

            pos += step2;
            if (pos >= len) break;
            if (step2) {
                result[index++] = s[pos];
            }
        }
    }

    result[index] = '\0';  // Null-terminate the result string
    return result;
}

int main() {
    char s[] = "PAYPALISHIRING";
    int numRows = 4;

    char *converted = convert(s, numRows);
    printf("%s\n", converted);  // Output: "PINALSIGYAHRPI"

    free(converted);  // Free the allocated memory
    return 0;
}

