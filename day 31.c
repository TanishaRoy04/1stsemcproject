Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // size of array
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int key;
    cin >> key;
    
    // Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;  // if not found
    return 0;
}
