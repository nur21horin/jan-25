#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;  // Read number of test cases
    while (t--) {
        long n;
        cin >> n;  // Read value of n for each test case
        long x = 1;
        while (2 * x <= n) {
            x *= 2;  // Find the largest power of 2 <= n
        }
        cout << x << endl;  // Output the result
    }
    return 0;
}
