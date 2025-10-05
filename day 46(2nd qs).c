Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0}; // Array to count frequency of each letter
    int i;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;

        // As soon as a character repeats, print and stop
        if (freq[index] == 2) {
            printf("%c", str[i]);
            return 0;
        }
    }

    // If no repeating character found
    printf("No repeating character");
    return 0;
}
