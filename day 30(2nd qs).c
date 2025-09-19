#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);   // size of array

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos = 0, neg = 0, zero = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    return 0;
}
