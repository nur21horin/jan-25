#include <iostream>
#include <vector>
using namespace std;

int minMovesToWinContest(string s) {
    int n = s.length();
    int lastZero = -1, firstOne = n;
    
    // Find the last position of '0' and the first position of '1'
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') lastZero = i;
        if (s[i] == '1' && firstOne == n) firstOne = i;
    }

    // Count the moves required
    int movesToMakeSAllZeros = (lastZero == -1) ? 0 : n - lastZero - 1;
    int movesToMakeTAllOnes = (firstOne == n) ? 0 : firstOne;

    return min(movesToMakeSAllZeros, movesToMakeTAllOnes);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int result = minMovesToWinContest(s);
        cout << result << endl;
    }
    return 0;
}
