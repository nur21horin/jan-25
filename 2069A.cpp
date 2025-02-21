// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int tt;
//         cin>>tt;
//         int arr[tt];
//         for(int i=0; i<tt-2; i++){
//             cin>>arr[i];
//         }
//         bool possible = true;
//         for(int i=1; i<tt-2; i++){
//             if(arr[i-1] == 1 && arr[i] == 1 && arr[i+1] == 1){
//                 possible = false;
//                 break;
//             }
//         }
//         if(possible) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

bool solve() {
    int n;
    cin >> n;
    vector<int> b(n - 2);
    for (int i = 0; i < n - 2; ++i) {
        cin >> b[i];
    }

    if (n == 3) {
        return true; // Any array of size 3 works
    }

    if (n == 4) {
        if (b == vector<int>{1, 1}) {
            return true;
        } else if (b == vector<int>{0, 0} || b == vector<int>{0, 1} || b == vector<int>{1, 0}) {
          return true;
        } else {
          return false;
        }
    }

    for (int i = 0; i < b.size(); ++i) {
        if (b[i] == 1) {
            bool ok = false;
            if (i > 0 && b[i - 1] == 0) ok = true;
            if (i < b.size() - 1 && b[i + 1] == 0) ok = true;
            if (i > 0 && i < b.size() -1 && b[i-1] == 1 && b[i+1] == 1) ok = true;
            if (i == 0 && b.size() > 1 && b[i+1] == 1) ok = true;
            if (i == b.size()-1 && b.size() > 1 && b[i-1] == 1) ok = true;

            if (!ok) return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
