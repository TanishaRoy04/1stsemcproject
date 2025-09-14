/*Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        *
*/
/*
Sample Test Cases:
Input 1:

Output 1:
*****
  ****
    ***
      **
        *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include <stdio.h>

int main() {
    int n = 5; // number of rows
    
    for (int i = 0; i < n; i++) {
        // print spaces
        for (int j = 0; j < i * 2; j++) {
            printf(" ");
        }
        // print stars
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

//Q49: Write a program to print the following pattern:
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
    int n = 5; // number of rows
    
    for (int i = 1; i <= n; i++) {
        for (int j = n - i + 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}

