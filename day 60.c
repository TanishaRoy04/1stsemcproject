Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>
#include <stdlib.h>

// Function to find maximums of all subarrays of size k
void printKMax(int arr[], int n, int k) {
    int *deque = (int *)malloc(n * sizeof(int));  // Will store indices
    int front = 0, rear = -1;

    // Process first k elements
    for (int i = 0; i < k; ++i) {
        while (front <= rear && arr[i] >= arr[deque[rear]])
            rear--;
        deque[++rear] = i;
    }

    // Process rest of the elements
    for (int i = k; i < n; ++i) {
        // Print the maximum element of the previous window
        printf("%d ", arr[deque[front]]);

        // Remove elements that are out of this window
        while (front <= rear && deque[front] <= i - k)
            front++;

        // Remove smaller elements
        while (front <= rear && arr[i] >= arr[deque[rear]])
            rear--;

        // Add current element
        deque[++rear] = i;
    }

    // Print the maximum element of the last window
    printf("%d\n", arr[deque[front]]);

    free(deque);
}

int main() {
    int n, k;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 0;
    }

    printf("Output:\n");
    printKMax(arr, n, k);

    return 0;
}
