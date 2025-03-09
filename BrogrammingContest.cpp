#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int minMovesToWinContest(string s){
    int n=s.length();
    int ones=0, zeros=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ones++;
            while(i<n && s[i]=='1'){
                i++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            zeros++;
            while(i<n && s[i]=='0'){
                i++;
            }
        }
    }
    return min(ones,zeros);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int tt;
        cin>>tt;
        string s;
        cin>>s;
        int result=minMovesToWinContest(s);
        cout<<result<<endl;
    }
    return 0;
}