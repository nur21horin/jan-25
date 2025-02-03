#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
/*Nur mohammod*/
int binary(int n,vector<int>v){
    ll total_km=0;
    int count=0;
    while(total_km < n){
        total_km+=v[count%3];
        count++;
    }
    return count;

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> v;
    //v.push_back(n);
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    int cc=binary(n,v);
    cout<<cc<<endl;
    }
    return 0;
}