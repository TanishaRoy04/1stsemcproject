Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int lastIndex[256];  // ASCII character map
    int maxLen = 0;
    int start = 0;

    // Initialize all characters as not seen
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (int end = 0; end < n; end++) {
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;

        lastIndex[(unsigned char)s[end]] = end;
        int currLen = end - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    return maxLen;
}

int main() {
    char s[1000];

    printf("Enter the string: ");
    scanf("%s", s);

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}
