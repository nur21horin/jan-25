 #include<iostream>

 #include<string>
 using namespace std;
 int main(){
     string s;
     cin>>s;
     string result;
     for(size_t i=0;i<s.length();i++){
         if(s[i]=='.'){
             result+='0';
         }else if(s[i]=='-' && s[i+1]=='.'){
             result+='1';
             ++i;
         }else if(s[i]=='-' && s[i+1]=='-'){
            result+='2';
             ++i;
         }
     }
    cout<<result;
   cout<<endl;
}