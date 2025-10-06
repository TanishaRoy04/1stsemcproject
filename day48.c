Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

// Function to check if str2 is a rotation of str1
int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, they can't be rotations
    if (len1 != len2)
        return 0;

    // Create a new string that is str1 concatenated with itself
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];

    // Input strings
    scanf("%s", str1);
    scanf("%s", str2);

    // Check rotation
    if (isRotation(str1, str2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
