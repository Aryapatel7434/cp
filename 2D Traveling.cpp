#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,a,b;
    cin>>n>>k>>a>>b;
   //Note -> a and b are 1 base indexing.
    //vector to store the x and y cordinate each city.
    vector<long long>x(n+1),y(n+1);

    //read cordinate each city.
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    //calculate cost the direct a to b ->some time my root is not major city available so i directly a->b travel for me is batter
    long long ans=abs(x[a]-x[b])+abs(y[a]-y[b]);
    long long mins=1e17,mint=1e17;
    //i travel major city root
    for(int i=1;i<=k;i++){
        mins=min(mins,abs(x[a]-x[i])+abs(y[a]-y[i]));//starting
        mint=min(mint,abs(x[b]-x[i])+abs(y[b]-y[i]));//ending

    }
    ans=min(ans,mins+mint);

    cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}