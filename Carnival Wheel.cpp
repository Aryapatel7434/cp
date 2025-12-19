#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin>>l>>a>>b;
       
        long long g=__gcd(b,l);

        long long ans=(l-1) - ((l-1-a)%g);

        cout<<ans<<endl;

    }
}