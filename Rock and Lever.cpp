#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>cnt(32,0);

        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            int bit=0;

            while(x>1){
                x/=2;
                bit++;
            }
            cnt[bit]++;
        }
        long long ans=0;

        for(int i=0;i<32;i++){
            ans+=cnt[i]*(cnt[i]-1)/2;
        }
        cout<<ans<<endl;
    }
}