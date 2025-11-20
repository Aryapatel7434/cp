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
        string p=s;
        sort(p.begin(),p.end());
        int ans=0;
        for(int i=0;i<n;i++) if(s[i]!=p[i]) ans++;

        cout<<ans/2<<endl;
    }
}