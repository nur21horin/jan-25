#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<int> number;
        for(i=0;i<n;i++){
            int element;
            cin>>element;
            number.push_back(element);   
        }
       // sort(number.begin(),number.end());
       for(i=0;i<n;i++){//using insertion sort
        int temp=number[i];
        int j=i-1;
        while(j>=0 && number[j]>temp){
            number[j+1]=number[j];
            j--;
        }
        number[j+1]=temp;
       }

        int answer=abs(number[0]-number[n-1])+ abs(number[n-1]-number[1])+abs(number[1]-number[n-2])+abs(number[0]-number[n-2]);
       
        cout<<answer<<endl;
    }
   return 0;
}