#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;                  // size of first array
    int arr1[n1];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cin >> n2;                  // size of second array
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    // Merge
    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << (i == n2 - 1 ? "" : " ");

    return 0;
}
