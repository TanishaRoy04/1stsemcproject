Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);   // read string input (without spaces)

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);  // print each character on a new line
    }

    return 0;
}

