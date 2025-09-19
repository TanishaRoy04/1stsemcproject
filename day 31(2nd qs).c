Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>>

int main() {
    int n;
    cin >> n;   // size of array
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse in-place using two pointers
    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right
