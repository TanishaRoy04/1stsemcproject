Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

    #include <stdio.h>
#include <string.h>

int main() {
    char input[11];   // format: dd/mm/yyyy (10 chars + '\0')
    char output[15];  // format: dd-MMM-yyyy

    printf("Enter date (dd/04/yyyy): ");
    scanf("%10s", input);

    char day[3], month[3], year[5];

    // Extract parts of the date
    strncpy(day, input, 2);
    day[2] = '\0';
    strncpy(month, input + 3, 2);
    month[2] = '\0';
    strncpy(year, input + 6, 4);
    year[4] = '\0';

    // Convert month "04" → "Apr"
    char monthStr[4];
    if (strcmp(month, "04") == 0)
        strcpy(monthStr, "Apr");
    else
        strcpy(monthStr, "???"); // default if month isn't 04

    // Combine into final format
    sprintf(output, "%s-%s-%s", day, monthStr, year);

    printf("Output: %s\n", output);

    return 0;
}
