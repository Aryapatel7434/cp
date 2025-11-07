#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto x:v) cin>>x;

        int gcdt=v[0];

        for(int i=1;i<n;i++){
            gcdt=__gcd(gcdt,v[i]);
            if(gcdt>1){
                cout<<-1<<endl;
                continue;
            }
        }
        int ans=-1;
        for(int x=2;x<=50;x++){//maximum posiblity
            for(auto val:v){
                if(__gcd(val,x)==1){
                    ans=x;
                    break;
                }
            }
            if(ans!=-1) break;
        }
        cout<<ans<<endl;
        

    }
}