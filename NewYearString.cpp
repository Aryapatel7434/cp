#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

      
        if(s.find("2025")==string::npos){
            cout<<0<<endl;//2025 is not present.
            continue;
        }
        //Need to create 2026
        string target="2026";
        int ans=INT_MAX;
        for(int i=0;i<=n-4;i++){
            int cost=0;//start new substring
            for(int j=0;j<4;j++){
                if(s[i+j]!=target[j]) cost++;//how many char are diffrent tartget and substring .
            }
            ans=min(ans,cost);
        }
        cout<<ans<<endl;
        
    }
}