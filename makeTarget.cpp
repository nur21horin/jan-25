
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<char>> grid(N, vector<char>(N, '.'));

    // Perform the operations as described
    for (int i = 0; i < N; ++i) {
        int j = N - 1 - i;
        if (i <= j) {
            char color = (i % 2 == 0) ? '#' : '.';  
            for (int x = i; x <= j; ++x) {
                for (int y = i; y <= j; ++y) {
                    grid[x][y] = color;
                }
            }
        }
    }

    // Output the grid
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
