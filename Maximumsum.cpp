#include<bits/stdc++.h>
using namespace std;
int main()
{
    //this is a new concept creat prefix sum aarray and remove 2*i smallest element ans (k-i) largest element.

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        sort(v.begin(),v.end());
        
        //creat prefix sum array.
        vector<long long>pr(n+1,0);
        for(int i=0;i<n;i++){
            pr[i+1]=pr[i]+v[i];
        }
        long long ans=0;
        for(int i=0;i<=k;i++){
            long long left=2LL*i;//remove 2*i smallest element.
            long long right=k-i;//remove k-i largest element.

            long long sum=pr[n-right]-pr[left];
            ans=max(ans,sum);
        }
        cout<<ans<<endl;



    }
}
