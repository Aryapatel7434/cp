#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            mp[x]++;
        }
        int mex1=0;
        while(mp[mex1]>0) mex1++;

        if(mex1==0){
            int total=0;
            for(auto &it:mp){
                total += it.first * it.second;
            }
            cout << total << "\n";
        }
        else{
            for(int i=0;i<mex1;i++){
                if(mp[i]>0) mp[i]--;
            }
            int mex2=0;
            while(mp[mex2]>0) mex2++;

            int leftover_sum=0;
            for(auto &it:mp){
                leftover_sum += it.first * it.second;
            }
            cout << mex1 + mex2 + leftover_sum << "\n";
        }
    }
}
