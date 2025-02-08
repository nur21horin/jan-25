#include <iostream>
#include <vector>
using namespace std;

int findPositionOf1(int n) {
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }

    for (int k = 2; k <= n; k++) {
        int d = k / 2;  // Largest divisor of k other than k itself
        swap(a[d], a[k]);
    }

    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            return i;
        }
    }
    return -1; // Just a safeguard, shouldn't reach here
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << findPositionOf1(n) << endl;
    }
    return 0;
}
