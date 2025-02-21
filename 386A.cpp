#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    int winner_index = 0;
    int highest_price = prices[0];
    for (int i = 1; i < n; ++i) {
        if (prices[i] > highest_price) {
            highest_price = prices[i];
            winner_index = i;
        }
    }

    int second_highest_price = 0;
    if (winner_index == 0) {
        second_highest_price = prices[1];
        for(int i = 2; i < n; ++i){
            second_highest_price = max(second_highest_price, prices[i]);
        }
    } else {
      second_highest_price = prices[0];
       for(int i = 1; i < n; ++i){
            if (i != winner_index)
                second_highest_price = max(second_highest_price, prices[i]);
        }
    }

    cout << winner_index + 1 << " " << second_highest_price << endl;

    return 0;
}