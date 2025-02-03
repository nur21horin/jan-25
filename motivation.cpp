#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
  
     long long int n,x,si,ri;
     int ans=0;
	while(t--){
	   
	    cin>>n>>x;
	   
        vector<int> v;
        
	    for(int i=0;i<n;i++){
	        long long int s ,im;
	        cin>>s>>im;

            if(s<=x && ans <im){
            ans=im;
        }
        }
 cout<<ans<<endl;
 }

return 0;
}
