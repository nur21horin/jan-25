#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,i,j,temp;//n=size of array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
    }

    //remove the duplicate value
    
    vector<int> unique;
    unique.push_back(arr[0]);
    for(i=1;i<n;i++){
        if(arr[i] != arr[i-1]){
            unique.push_back(arr[i]);
        }
    }
    if(unique.size()>=2) cout<<unique[1]<<endl;
    else cout<<"NO"<<endl;
return 0;
}