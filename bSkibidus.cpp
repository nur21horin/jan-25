#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool can_sort(vector<int>& a, int b) {
    // Copy the original array to simulate the operations
    vector<int> modified_a = a;
    for (int i = 0; i < a.size(); ++i) {
        // Perform the operation: a[i] = b - a[i]
        modified_a[i] = b - a[i];
    }
    // Combine both original and modified arrays
    vector<int> combined_a = a;
    combined_a.insert(combined_a.end(), modified_a.begin(), modified_a.end());
    // Sort the combined array and check if non-decreasing order can be achieved
    sort(combined_a.begin(), combined_a.end());

    // Check if it's possible to pick n elements in sorted order
    for (int i = 1; i < combined_a.size(); ++i) {
        if (combined_a[i] < combined_a[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int b;
        cin >> b;

        if (can_sort(a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
