#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int>limit(n+1,0);

        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;

            if(x>y) swap(x,y);

            limit[y]=max(limit[y],x);
        }
        long long ans=0;
        int L=1;

        for(int r=1;r<=n;r++){
            L=max(L,limit[r]+1);
            ans+=r-L+1;
        }
        cout<<ans<<endl;
    }
}