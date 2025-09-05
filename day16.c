//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;

    // Input number
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check palindrome
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
