#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int n,d;
   cin>>n>>d;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   } 
   //selection sort
   for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    if(i!=min){
        swap(arr[i],arr[min]);
    }
   }
   int c=0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]-arr[i]>d){
            break;
        }
        c++;
    }
   }
   cout<<c*2<<endl;
   return 0;

}