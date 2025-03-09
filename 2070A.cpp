#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // Counting multiples of 15
        int ans = n / 15 + 1; // +1 because 0 is included as a valid number
        cout<<ans<<endl;
    }
    return 0;
}
