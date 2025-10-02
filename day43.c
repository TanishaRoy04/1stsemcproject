Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>Q85
#include <string.h>

int main() {
    char str[100];   // buffer for input
    scanf("%s", str);  // read string (without spaces)

    int len = strlen(str);

    // print reversed string
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
