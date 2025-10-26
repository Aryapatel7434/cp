#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<char,int>mp;
        vector<int>dist(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            if(mp[s[i]]==1){
                count++;
            }
            dist[i]=count;
        }
    
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=dist[i];
        }
        cout<<ans<<endl;
    }
}
//TC is o(nlogn),logn Tc is use for map ans n is number of element.