#include<stdio.h>
int main() {
    int n, target;
    
    // Read the size of the array
    scanf("%d", &n);
    int nums[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    

    // Read target value
    scanf("%d", &target);
    
    // Find two indices whose sum equals target
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    
    // If no solution found
    printf("-1 -1\n");
    return 0;
}
