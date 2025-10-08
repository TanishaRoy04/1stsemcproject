Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/


#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    
    // Read full name (including spaces)
    fgets(name, sizeof(name), stdin);

    // Print first character as uppercase initial
    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    // Loop through the name to find spaces (which indicate new words)
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ')
            printf("%c.", toupper(name[i+1]));
    }

    return 0;
}
