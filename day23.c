/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/


/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/


#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 5; i++) {          // Loop for rows
        for (j = 0; j < 5; j++) {      // Loop for columns
            printf("*");
        }
        printf("\n");                  // Move to next line
    }
    return 0;

}



