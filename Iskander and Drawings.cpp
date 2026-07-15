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
        int cnt=0;
        int ans=0;
        for(auto &c:s){
            if(c=='*'){
                cnt=0;
            }
            else{
                cnt++;
            }
            ans=max(ans,(cnt+1)/2);
        }
        cout<<ans<<endl;
    }
}