Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/




#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);   // read number of elements

    int arr[n], sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // input array elements
        sum += arr[i];         // add to sum
    }

    printf("%d\n", sum);   // print sum
    return 0;
}


Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
