#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the fgets input
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--; // Adjust length after removing newline
    }

    for (int i = 0; i < length; i++) {
        if (str[i] == '\0') {
            continue;  // Skip already processed characters
        }

        int count = 0;
        // Count occurrences of str[i]
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
                if (j != i) {
                    str[j] = '\0';  // Mark as processed
                }
            }
        }
        printf("'%c' appeared %d times\n", str[i], count);

        // Shift characters left to remove the processed ones marked as '\0'
        for (int j = 0; j < length; j++) {
            if (str[j] == '\0') {
                for (int k = j; k < length - 1; k++) {
                    str[k] = str[k + 1];
                }
                str[length - 1] = '\0'; // Clear the last character
                length--;  // Decrease the effective length
                j--;  // Adjust index for next iteration
            }
        }
    }

    return 0;
}