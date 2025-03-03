#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxVolume=*max_element(arr,arr+n);
    int sumOfVolume=0;
    for(int i=0;i<n;i++){
        sumOfVolume+=arr[i];
    }
    sumOfVolume-=maxVolume;
    if(sumOfVolume<=m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}