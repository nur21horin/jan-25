#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        v.push_back(value);
    }
    bool ans=true;
    for(int i=0;i<n-1;++i){
       if(v[i]>=v[i+1]){
        ans=false;
        break;
       }
    }
    if(ans){
        cout<<"Yes"<<endl;
       }else{
        cout<<"No"<<endl;
       }
    return 0;
}