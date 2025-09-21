#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cin >> num;

    int freq[10] = {0};

    // Count frequency of each digit
    for (char c : num) {
        freq[c - '0']++;
    }

    // Find digit with maximum frequency
    int maxDigit = 0, maxFreq = 0;
    for (int d = 0; d <= 9; d++) {
        if (freq[d] > maxFreq) {
            maxFreq = freq[d];
            maxDigit = d;
        }
    }

    cout << maxDigit;
    return 0;
}
