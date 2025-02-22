#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int arr[2]={x,y};
        sort(arr,arr+2);
        cout<<arr[0]<<" "<<arr[1]<<endl;

    }
}