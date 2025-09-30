#include <stdio.h>

int main() {
    char str[100];

    // Read input string (single word)
    scanf("%s", str);

    // Print each character on a new line
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
