#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    unordered_map<int, int> last_index;
    int shortest_length = INT_MAX;

    for (int i = 0; i < N; ++i) {
        if (last_index.find(A[i]) != last_index.end()) {
            int length = i - last_index[A[i]] + 1;
            shortest_length = min(shortest_length, length);
        }
        last_index[A[i]] = i;
    }

    if (shortest_length == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << shortest_length << endl;
    }

    return 0;
}
