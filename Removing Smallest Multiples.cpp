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

        vector<int>visited(n+1,0);

        long long mincost=0;

        for(int k=1;k<=n;k++){
            for(int j=k;j<=n;j+=k){
                if(s[j-1]=='1'){
                    break;
                }
                if(!visited[j]){
                    visited[j]=1;
                    mincost+=k;
                }
            }
        }
        cout<<mincost<<endl;
    }
}