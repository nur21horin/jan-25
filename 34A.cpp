#include <iostream>
#include <vector>
#include <cmath> // For abs()

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int min_diff = abs(heights[0] - heights[n-1]);
    int index1 = n, index2 = 1;

    for (int i = 0; i < n-1; ++i) {
        int diff = abs(heights[i] - heights[i+1]);
        if (diff < min_diff) {
            min_diff = diff;
            index1 = i + 1;
            index2 = i + 2;
        }
    }

    // Output the pair of indices
    cout << index1 << " " << index2 << endl;

    return 0;
}
