/*this problem is solving my max method and then add one with maxvalue*/
#include <iostream>
#include <algorithm>
using namespace std;
using ll= long long;
int main() {
    ios::sync_with_stdio(0);
     cin.tie(nullptr);
    int t=1;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        cout << max(n,m)+1 << endl;
    }
    return 0;
}

