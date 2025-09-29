Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    // Traverse diagonals
    for (int d = 0; d < n + m - 1; d++) {
        if (d % 2 == 0) {
            // Traverse upwards
            int r = (d < n) ? d : n - 1;
            int c = d - r;
            while (r >= 0 && c < m) {
                printf("%d ", arr[r][c]);
                r--;
                c++;
            }
        } else {
            // Traverse downwards
            int c = (d < m) ? d : m - 1;
            int r = d - c;
            while (c >= 0 && r < n) {
                printf("%d ", arr[r][c]);
                r++;
                c--;
            }
        }
    }

    return 0;
}
