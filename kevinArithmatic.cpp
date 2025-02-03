#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        int sum=0,ans=0;
        int even=0,odd=0;
        for(i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
            }
            }
            odd=n-even;
            if(even>0){
                cout<<odd+1<<endl;
            }else{
                cout<<odd-1<<endl;
            }
    }
    return 0;
}