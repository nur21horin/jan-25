#include<bits/stdc++.h>
using namespace std;
/*Nur mohammod*/

int findIndex(int n){
    if(n==1) return 1;
    int k=n;
    int d=k/2;

    int positionIndex=findIndex(n-1);
    
    if(positionIndex==d){
        return k;
    }
    else if (positionIndex ==k) {
        return d;
    }
    else {
        return positionIndex;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<findIndex(n)<<endl;
    }
    return 0;

}