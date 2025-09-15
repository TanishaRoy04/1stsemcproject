Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main() {
    int n = 5;  // You can change this value for bigger patterns
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (int j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    // Array defines how many stars in each group
    int groups[] = {1, 2, 3, 4, 3, 1};
    int size = sizeof(groups) / sizeof(groups[0]);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        // Print an empty line between groups (except after last group)
        if (i != size - 1) {
            printf("\n");
        }
    }
    return 0;
}
