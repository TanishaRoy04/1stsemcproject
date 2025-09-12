/*Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

*/
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        
        // Update for next term
        numerator += 2;      // even numbers
        denominator += 4;    // increase by 4
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
