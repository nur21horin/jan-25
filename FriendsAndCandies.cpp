#include <iostream>
#include <vector>
#include <numeric> // for accumulate
#include <algorithm> // for sort

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Calculate the total sum of candies
        int totalCandies = accumulate(a.begin(), a.end(), 0);
        
        
        if (totalCandies % n != 0) {
            cout << -1 << endl;
            continue;
        }

        int target = totalCandies / n;
        int k = 0;
        
       
        for (int i = 0; i < n; ++i) {
            if (a[i] > target) {
                k++;
            }
        }
        
        cout << k << endl;
    }

    return 0;
}
