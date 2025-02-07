/*Nur Mohammod*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int ll n ,m; 
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //check for valid row
    for(int i=0;i<n;++i){
        for(int j=0;j<m-1;++j){
            if(arr[i][j] !=arr[i][j+1]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    //check for column
    for(int i=0;i<m;++i){
        for(int j=0;j<n-1;++j){
            if(arr[j][i] == arr[j+1][i]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;

    return 0;
}