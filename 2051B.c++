#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int ans=0;
        int sum=a+b+c;
        int com=n/sum;
        int uncom=n%sum;

        if(uncom>(a+b)) ans=3*com+3;
        else if(uncom>a) ans=3*com+2;
        else if(uncom>0) ans=3*com+1;
        else ans=3*com;
        cout<<ans<<endl;;
    }
    return 0;
}