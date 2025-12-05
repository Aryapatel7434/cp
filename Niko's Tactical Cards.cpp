#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;

    vector<long long>a(n),b(n);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    long long mn=0,mx=0;

    for(int i=0;i<n;i++){
        long long x=mn-a[i];
        long long y=mx-a[i];
        long long p=b[i]-mx;
        long long q=b[i]-mn;

        mn=min(x,p);
        mx=max(y,q);
    }
    cout<<mx<<endl;
}
int main()
{
    int t;
    cin>>t;
     while(t--){
        solve();
     }
}