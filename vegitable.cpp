#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(n<=(a+c) && n<=b ) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;
}