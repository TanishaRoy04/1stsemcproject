Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if any
    str[strcspn(str, "\n")] = '\0';

    // Input character to search
    printf("Enter a character to count: ");
    scanf("%c", &ch);

    // Count occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
